#include <string_view>
#include <iostream>

void view(std::string_view s)
{
  std::cout << "view not copying " << s << '\n';
}

int main()
{
  view("this is a string");
  std::string more("this is a longer string");
  view(more);
  return EXIT_SUCCESS;
}