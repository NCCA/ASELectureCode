#include <iostream>
#include <cstdlib>

namespace AReallyLongNamespaceThatIdontWantToType
{

	void foo()
	{
		using std::cout;
		using std::endl;

		cout<<"foo "<<endl;
	}
}

int main()
{
	namespace foo=AReallyLongNamespaceThatIdontWantToType;
	foo::foo();

}







