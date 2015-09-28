#include <iostream>
#include <cstdlib>

namespace foo1
{
	void foo()
	{
		std::cout<<"foo1::foo\n";
	}

}

namespace foo2
{
	void foo()
	{
		std::cout<<"foo2::foo\n";
	}

}

namespace foo1
{
  void bar()
  {
    std::cout<<"bar\n";
  }
}


int  main()
{

	foo1::foo();
	foo2::foo();
 foo1::bar();

}