#include <unordered_map>
#include <utility>

int main()
{
  std::unordered_map<std::pair<int, int>, int> maps;
  maps[std::pair<int, int>(2, 3)] = 99;
}