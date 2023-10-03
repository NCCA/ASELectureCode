#include <iostream>
#include <utility>
#include <string>
#include <functional>
#include <vector>
#include <algorithm>
#include <unordered_map>

// Overload the has operator for a std::pair of ints

template <>
struct std::hash<std::pair<int, int>>
{
  std::size_t operator()(std::pair<int, int> const &s) const noexcept
  {
    std::size_t a = (s.first);
    std::size_t b = (s.second);
    // https://en.wikipedia.org/wiki/Pairing_function#Cantor_pairing_function
    return (a + b) * (a + b + 1) / 2 + a;
  }
};

int main()
{
  std::string name("This needs hashing");
  auto hash = std::hash<std::string>{}(name);
  std::cout << hash << '\n';

  std::pair<int, int> xy1(2, 3);
  std::pair<int, int> xy2(3, 5);
  std::cout << std::hash<std::pair<int, int>>{}(xy1) << '\n';
  std::cout << std::hash<std::pair<int, int>>{}(xy2) << '\n';
  std::vector<size_t> hashes;
  for (int y = 0; y < 1000; ++y)
  {
    for (int x = 0; x < 1000; ++x)
    {
      std::pair<int, int> xy(x, y);
      std::cout << "( " << x << ',' << y << ") ";
      auto h = std::hash<std::pair<int, int>>{}(xy);
      hashes.push_back(h);
      std::cout << h << '\n';
    }
  }
  // see if our hash works and creates unique values for x,y
  std::sort(std::begin(hashes), std::end(hashes));
  auto it = std::unique(std::begin(hashes), std::end(hashes));
  std::cout << ((it == hashes.end()) ? "Unique\n" : "Duplicate(s)\n");

  std::unordered_map<std::pair<int, int>, int> maps;
  for (int i = 0; i < 10; ++i)
    maps[std::pair<int, int>(i, i)] = i;
  for (auto m : maps)
    std::cout << '(' << m.first.first << ',' << m.first.second << ") " << m.second << '\n';
}