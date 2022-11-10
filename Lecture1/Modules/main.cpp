#include <iostream>
#include <cstdlib>

#include "external.h"

int main()
{
  int data = 99;
  std::cout << "Data " << data << '\n';
  data = foo(data);
  std::cout << "after function " << data << '\n';
  data = foo2(data);
  std::cout << "after function " << data << '\n';

  return EXIT_SUCCESS;
}
