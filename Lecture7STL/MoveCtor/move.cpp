#include <vector>
#include <iostream>
#include <memory>
#include <string>

struct Point
{
    float x=0.0f;
    float y=0.0f;
    float z=0.0f;
};

class PointArray
{
  public :
    PointArray()=delete;
    PointArray(size_t _size,std::string _name ) : m_name{_name},m_size{_size}
    {
      std::cout<<_name<<" called user defined ctor with size "<<_size<<'\n';
      m_points= std::make_unique<Point []>(_size);
    }
    PointArray(PointArray &&_a) : m_name(std::move(_a.m_name)),
                        m_points(std::move(_a.m_points)),
                        m_size(std::move(_a.m_size))
    {
      std::cout<<m_name<<" move constructor called size "<<m_size<<'\n';            
    }
    ~PointArray()
    {
      std::cout<<m_name<<" dtor called\n";
    }
    PointArray & operator=(PointArray &_a)
    {
      std::cout<<m_name <<" assignment operator \n";
      m_size=_a.m_size;
      m_points=std::make_unique<Point []>(m_size);
      // copy data as well
      m_name=_a.m_name;
      return *this;
    }
    PointArray & operator=(PointArray &&_a) 
    {
      m_name=std::move(_a.m_name);
      m_points=std::move(_a.m_points);
      m_size=std::move(_a.m_size);
      std::cout<<m_name<<" move assignment operator \n";
      return *this;
    }

  private :
    std::string m_name;
    std::unique_ptr<Point []> m_points;
    size_t m_size=0;

};


int main()
{
  {
    std::cout<<"*** Creating Auto object\n";
    PointArray p(10,"automatic");     
  }
  {
    std::cout<<"*** Creating empty vector\n";
    std::vector<PointArray> array;
    std::cout<<"*** using push_back\n";
    array.push_back(PointArray(5,"from push_back"));
    std::cout<<"*** using emplace_back \n";
    array.emplace_back(3,"emplace");
    std::cout<<"*** using assignment \n";
    PointArray d(7,"New Array");
    array[0]=d;
    std::cout<<"****  Calling pop_back\n";
    array.pop_back();
  }
  {
    PointArray p(3,"ptr");
    auto c=std::move(p);
    
  }
}


