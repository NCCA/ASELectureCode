#include <iostream>
#include <cstdlib>

namespace graphics
{
	void print()
	{
		std::cout<<"graphics::print\n";
	}

}

namespace console
{
	void print()
	{
		std::cout<<"console::print\n";
	}

}

namespace graphics
{
  void debug()
  {
    std::cout<<"graphics::debug\n";
  }

	
}


int  main()
{
<<<<<<< HEAD

	foo1::foo();
	foo2::foo();
	foo1::bar();

=======
	graphics::print();
	console::print();
	graphics::debug();
>>>>>>> c087d0fd442f70f2ea9d80609c2a57aa7c8aa66d
}