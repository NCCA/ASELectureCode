#include <iostream>
#include <cstdlib>
#include "CustomNew.h"
#include "ClassNew.h"
#include <memory>


int main()
{
  {
    std::cout<<MAGENTA<<"Raw Pointer char\n";
    char * data = new char [10];
    delete [] data;
  }
  {    
    std::cout<<MAGENTA<<"Raw Pointer int *\n";
    int * data = new int [10];
    delete [] data;

  }
  std::cout<<MAGENTA<<"Smart Pointer \n";
  std::unique_ptr<int []> smart(new int [10]);

  std::cout<<MAGENTA<<"Smart Pointer std::make_unique<>\n";
  std::unique_ptr<int []> smart2=std::make_unique<int[]>(250);

  std::unique_ptr<Point []> point=std::make_unique<Point[]>(5);
  Point *p2 = new Point;
  delete p2;
  return EXIT_SUCCESS;

}