#include <iostream>
#include <cstdlib>

int main()
{
	struct vertex 
	{
	 float x=0.0f;
	 float y=0.0f;
	 float z=0.0f;
	} ;
	vertex p1 = { 1.0f, 2.5f, -1.5f};
	vertex p2 = p1;
	vertex p3;
	p2.z=3.0f;
	std::cout<<"Point1 "<<p1.x<<' '<<p1.y<<' '<<p1.z<<'\n';
	std::cout<<"Point2 "<<p2.x<<' '<<p2.y<<' '<<p2.z<<'\n';
<<<<<<< HEAD
	
	
=======
	std::cout<<"Point3 "<<p3.x<<' '<<p3.y<<' '<<p3.z<<'\n';
>>>>>>> c087d0fd442f70f2ea9d80609c2a57aa7c8aa66d
	return EXIT_SUCCESS;
}