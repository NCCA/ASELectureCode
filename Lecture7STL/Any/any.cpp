#include <iostream>
#include <vector>
#include <any>
#include <random>

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

int main()
{

  std::random_device rd;
  std::mt19937 mt(rd());
  std::uniform_int_distribution<> dist(0, 10);

  std::vector<std::any> cp;
  for (int i = 0; i < 10; ++i)
  {
    if (dist(mt) > 5)
      cp.push_back(Vec3());
    else
      cp.push_back(Colour());
  }

  for (auto v : cp)
  {
    if (v.has_value())
      std::cout << v.type().name() << ' ';
    if (v.type() == typeid(Vec3))
      std::cout << std::any_cast<Vec3>(v);
    else if (v.type() == typeid(Colour))
      std::cout << std::any_cast<Colour>(v);
  }

  return EXIT_SUCCESS;
}