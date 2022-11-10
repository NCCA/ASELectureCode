#include <iostream>
#include <cstdlib>
#include <array>

int main()
{
<<<<<<< HEAD
	std::array<char,5> vowels={{'a','e','i','o','u'}};
=======
	std::array<char,5> vowels={ {'a','e','i','o','u'}};
>>>>>>> c087d0fd442f70f2ea9d80609c2a57aa7c8aa66d
	for(int i=0; i<vowels.size(); ++i)
	{
		std::cout<<vowels[i]<<' ';
	}
	std::cout<<'\n';
	// note use of reference here to mutate
	for( auto &v : vowels)
	{
		v=toupper(v);
	}
	for( auto v : vowels)
	{
		std::cout<<v<<' ';
	}	
	std::cout<<'\n';

}








