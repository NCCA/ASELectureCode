#ifndef POINT_H_
#define POINT_H_

#include <iostream>
#include "CustomNew.h"
#include <memory>

class Point
{
  public :
    Point(){std::cout<<"defalt ctor\n";}
    Point(float _x, float _y):m_x(_x),m_y(_y) 
      {std::cout<<"User Defined ctor\n";}
    Point(const Point &p ):m_x(p.m_x),m_y(p.m_y) 
    {std::cout<<"Copy ctor\n";}
    Point(const Point &&p ):m_x(p.m_x),m_y(p.m_y) 
    {std::cout<<"Move ctor\n";}
  
    private :
      float m_x=0;
      float m_y=0;
};

#endif