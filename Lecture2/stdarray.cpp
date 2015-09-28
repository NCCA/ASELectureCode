#include <iostream>
#include <cstdlib>
#include <array>

int main()
{
	std::array<char,5> vowels={'a','e','i','o','u'};
	for(int i=0; i<vowels.size(); ++i)
	{
		std::cout<<vowels[i]<<" ";
	}
	std::cout<<"\n";
}