#include <iostream>
#include <cstdlib>



void foo()
{
	using std::cout;
	using std::endl;	
	cout<<"foo "<<endl;
}

void bar()
{
	using namespace std;
	cout<<"bar"<<endl;
}

int main()
{
	cout<<"in main\n";
	foo();
	bar();

}