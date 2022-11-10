#include <iostream>
#include <utility>
#include <string>

struct Vec3
{
  float x, y, z;
};

std::tuple<std::string, Vec3, float> getAgent()
{
  auto agent = std::make_tuple<std::string, Vec3, float>("Agent0", Vec3{2, 3, 4}, 50.2f);
  return agent;
}

int main()
{

  auto agent = getAgent();
  std::cout << "Using get<> " << std::get<0>(agent) << " ["
            << std::get<1>(agent).x << ',' << std::get<1>(agent).y << ',' << std::get<1>(agent).z
            << "] " << std::get<2>(agent) << '\n';
  // for c++ 17 we can use structured bindings
  auto [name, pos, size] = getAgent();
  std::cout << name << " [" << pos.x << ',' << pos.y << ',' << pos.z << "] " << size << '\n';
  return EXIT_SUCCESS;
}