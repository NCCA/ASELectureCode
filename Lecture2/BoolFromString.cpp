#include <iostream>
#include <string_view>

void load(std::string_view a, bool b) 
{
    std::cout<<"bool version a "<<a<<b<<'\n';
}

void load(std::string_view a,std::string_view b) 
{
    std::cout<<"a "<<a<<b<<'\n';
}



int main()
{
    load("filea","fileb");
    load("filea",true);
}