#include <iostream>

bool found()
{
    return true;
}

int main()
{
    // old style
    auto value=found();
    if(value)
    {
        std::cout<<"found\n";
    }

    // new style
    if(auto value=found();value)
    {
        std::cout<<"found\n";
    }

}