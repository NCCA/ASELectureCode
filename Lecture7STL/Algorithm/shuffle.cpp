#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector <int> data;
	for(int i=0; i<10; ++i)
		data.push_back(i);
	std::for_each(data.begin(),data.end(),[](int a){std::cout<<a<<'\n';});
	std::random_shuffle(data.begin(),data.end());
	std::cout<<"shuffle\n";
	std::for_each(data.begin(),data.end(),[](int a){std::cout<<a<<'\n';});
}