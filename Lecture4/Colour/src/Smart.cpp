#include <iostream>
#include <cstdlib>
#include <memory>
#include "Colour.h"

int main()
{

std::unique_ptr<Colour> current;
//Colour red(1,0,0);
// red.Print();
current.reset( new Colour(1,0,0));
current->setName("red");
current->print();

current.reset(new Colour(1,1,1));
current->setName("white");
current->print();


}

