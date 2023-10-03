#include <iostream>

template <typename T>
void test(T b) 
{
    if constexpr (std::is_same_v<T, bool>)
    {
        std::cout<<"bool version \n";
    }
    else if constexpr (std::is_same_v<T,int>)
    {
        std::cout<<"int version \n";
    }
}

int main()
{
    test(true);
    test(1);
    test(1.0);
    
}