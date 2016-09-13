#include <iostream>
#include <cstdlib>

namespace foo1
{
	void foo()
	{
		std::cout<<"foo1::foo\n";
	}

};

namespace foo2
{
	void foo()
	{
		std::cout<<"foo2::foo\n";
	}

};

using namespace foo1;
using namespace foo2;


int  main()
{
  foo();
	foo();
}