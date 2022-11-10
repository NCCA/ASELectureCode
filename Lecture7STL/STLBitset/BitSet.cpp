#include <iostream>
#include <bitset>
#include <cstdlib>
#include <string>

int main(void)
{
	std::bitset<8> first(std::string("101101101"));
	std::bitset<8> second(std::string("00011001"));

	std::cout << first << '\n';
	std::cout << second << '\n';
	first[1] = 0;
	std::cout << '|' << (first | second) << '\n';
	std::cout << '&' << (first & second) << '\n';
	std::cout << '^' << (first ^ second) << '\n';

	for (int i = 0; i < first.size(); ++i)
	{
		std::cout << first[i] << '\n';
	}

	return EXIT_SUCCESS;
}