#include <iostream>
#include <cstdlib>

int main()
{
	struct vertex 
	{
	 float x;
	 float y;
	 float z;
	} ;
	struct vertex p1 = { 1.0f, 2.5f, -1.5f};
	struct vertex p2 = p1;
	p2.z=3.0f;
	std::cout<<"Point1 "<<p1.x<<' '<<p1.y<<' '<<p1.z<<'\n';
	std::cout<<"Point2 "<<p2.x<<' '<<p2.y<<' '<<p2.z<<'\n';
	return EXIT_SUCCESS;
}