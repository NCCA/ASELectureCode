#include <iostream>
#include <string_view>

enum class LoadType
{
    True,
    False
};

void load(std::string_view a, LoadType b) 
{
    auto boolVal = static_cast<bool>(b);
    std::cout<<"bool version a "<<a<<boolVal<<'\n';
}

void load(std::string_view a,std::string_view b) 
{
    std::cout<<"a "<<a<<b<<'\n';
}



int main()
{
    load("filea","fileb");
    load("filea",LoadType::True);
    load("filea",LoadType::False);
}