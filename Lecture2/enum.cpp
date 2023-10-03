#include <iostream>
#include <array>
enum class DIRECTION {UP,DOWN,LEFT,RIGHT};


int main()
{
    std::array<int,4> data={{0,1,2,3}};
    std::cout<<data[static_cast<size_t>(DIRECTION::UP)]<<"\n";
}