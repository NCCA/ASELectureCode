#include <iostream>
#include <cstdlib>

#include "Colour.h"

int main()
{
  Colour red(1.0f);
  red.setName("red");
  Colour green(0.0f,1.0f);
  green.setName("green");
  Colour white(1.0f,1.0f,1.0f);
  white.setName("white");
  Colour mixed;
  mixed.setName("mixed");
  red.print();
  green.print();
  white.print();
  mixed.print();
  white.mix(red,0.2);
  white.print();
  mixed.clamp(0.3,0.6);
  mixed.print();
  white.mix(red,2.2);
}
