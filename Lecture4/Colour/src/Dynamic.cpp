#include <iostream>
#include <cstdlib>

#include "Colour.h"

int main()
{

Colour *current;
//Colour red(1,0,0);
// red.Print();
current = new Colour(1,0,0);
current->setName("red");
current->print();

delete current;


current = new Colour(1,1,1);
current->setName("white");
current->print();

delete current;

}

