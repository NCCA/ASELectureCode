#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *mem;
	mem=malloc(18446347440715);
	for(int i=0; i<3; ++i)
		sleep(2);
	free(mem);
	return EXIT_SUCCESS;
}
