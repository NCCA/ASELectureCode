#include <vector>
#include <iostream>
#include <variant>
#include <random>
#include <ostream>
struct Vec3
{
  float x, y, z;
  friend std::ostream &operator<<(std::ostream &os, const Vec3 &)
  {
    os << "Vec3\n";
    return os;
  }
};

struct Colour
{
  float r, g, b, a;
  friend std::ostream &operator<<(std::ostream &os, const Colour &)
  {
    os << "Colour\n";
    return os;
  }
};

template <class... Ts>
struct overload : Ts...
{
  using Ts::operator()...;
};
template <class... Ts>
overload(Ts...) -> overload<Ts...>; // line not needed in c++20

int main()
{

  std::random_device rd;
  std::mt19937 mt(rd());
  std::uniform_int_distribution<> dist(0, 10);

  using colour_or_point = std::variant<Vec3, Colour>;
  std::vector<colour_or_point> cp;
  for (int i = 0; i < 10; ++i)
  {
    if (dist(mt) > 5)
      cp.push_back(Vec3());
    else
      cp.push_back(Colour());
  }

  for (auto v : cp)
  {
    auto index = v.index();
    if (index == 0)
      std::cout << std::get<0>(v);
    else
      std::cout << std::get<1>(v);
  }
  std::cout << "************************\n";
  for (auto v : cp)
  {
    std::visit(overload{[](Vec3 &a)
                        { std::cout << a; },
                        [](Colour &a)
                        { std::cout << a; }},
               v);
  }

  return EXIT_SUCCESS;
}