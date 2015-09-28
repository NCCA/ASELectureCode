#include <iostream>

#pragma pack(push, 1)

// our image data structure see comments for details

typedef struct
{
	char  identifier;          // must be 0
	char  colourMapType;      // type of colour map 0=none
	char  imageType;          // set to rgb==2

	short cms;     // must be 0
	short cml;    // must be 0
	char  cmb;      // must be 16

} packed;

#pragma pack(pop)

typedef struct
{
	char  identifier;          // must be 0
	char  colourMapType;      // type of colour map 0=none
	char  imageType;          // set to rgb==2

	short cms;     // must be 0
	short cml;    // must be 0
	char  cmb;      // must be 16
} notPacked;

int main()
{
	std::cout<<"size of char "<<sizeof(char)<<"\n";
	std::cout<<"size of short "<<sizeof(short)<<"\n";
	std::cout<<sizeof(packed)<<"\n";
	std::cout<<sizeof(notPacked)<<"\n";

}