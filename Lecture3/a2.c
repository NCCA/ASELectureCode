#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
float e=9999;
float f=8888;

  float data[]={2.3,4.5,6.7,3,2,3.0};
  for(int i=0; i<16; ++i)
    printf("%f \n",data[i]);
    
  data[8]=5555;
  printf("f=%f\n",f);
  return EXIT_SUCCESS;
}