#include <iostream>
#include <utility>
#include <string>
int main()
{
  auto p = std::make_pair<int, std::string>(1, "one");
  std::cout << p.first << ' ' << p.second << '\n';
  std::pair<int, std::string> p2(2, "two");
  std::cout << p2.first << ' ' << p2.second << '\n';

  return EXIT_SUCCESS;
}
