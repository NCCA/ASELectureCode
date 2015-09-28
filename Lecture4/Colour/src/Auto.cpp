#include <iostream>
#include <cstdlib>

#include "Colour.h"

int main()
{

Colour red(1.0,0.0,0.0);
red.setName("red");
Colour green(0.0f,1.0,0.0f);
green.setName("green");

for(int i=0; i<10; ++i)
{
  Colour white(1.0f,1.0f,1.0f);
  Colour e(1,2,2,2);
  e.setName("e");
  e.print();
  white.setName("white");
  white.print();
}
red.print();


green.print();
red.mix(green,0.5);
red.print();
red.blue(1.0);
red.clamp(0.6,0.8);
red.print();
}










