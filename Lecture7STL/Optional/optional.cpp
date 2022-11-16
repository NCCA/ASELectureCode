#include <optional>
#include <functional>
#include <iostream>
#include <memory>
#include <string_view>

class FactoryObject
{
};

std::optional<std::unique_ptr<FactoryObject>> createObject(std::string_view _name)
{
  if (_name == "tree")
    return std::make_unique<FactoryObject>();
  else
    return std::nullopt;
}

int main()
{
  auto object = createObject("grass");
  if (object == std::nullopt)
    std::cout << "error creating grass\n";

  object = createObject("tree");
  if (object)
    std::cout << "created tree\n";

  return EXIT_SUCCESS;
}