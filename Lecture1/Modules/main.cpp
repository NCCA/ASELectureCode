#include <iostream>
#include <cstdlib>

#include "external.h"

int main()
{
	int data=5;
	std::cout <<"Data "<<data<<std::endl;
	data=foo(data);
	std::cout << "after function "<<data<<std::endl;
	data=foo2(data);
	std::cout << "after function "<<data<<std::endl;

	return EXIT_SUCCESS;
}
