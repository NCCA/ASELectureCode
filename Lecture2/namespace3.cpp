#include <iostream>
#include <cstdlib>



void func1()
{
	using std::cout;
	using std::endl;	
	cout<<"func1 "<<endl;
}

void func2()
{
	using namespace std;
	cout<<"func2"<<endl;
}

int main()
{
<<<<<<< HEAD
	{	
	using namespace std;
	cout<<"in main\n";
	}
	foo();
	bar();

=======
	{
		using namespace  std;
		
		cout<<"in main\n";
	}
	func1();
	func2();
	std::cout<<"end\n";
>>>>>>> c087d0fd442f70f2ea9d80609c2a57aa7c8aa66d
}