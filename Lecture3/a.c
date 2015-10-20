#include <stdio.h>
#include <stdlib.h>
int main()
{
  printf("%d\n",sizeof(char *));
  printf("%d\n",sizeof(int *));
  printf("%d\n",sizeof(float *));
  printf("%d\n",sizeof(void *));

  return EXIT_SUCCESS;
}
