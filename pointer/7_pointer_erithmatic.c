#include <stdio.h>
int main()
{
  int number[4]={1,2,3,4};
  int *ptr;

  ptr = &number[0];

  printf("Using pointer erithmatic\n");
  printf("Element 0 = %d\n", *ptr);
  printf("Element 1 = %d\n", *(ptr+1));
  printf("Element 2 = %d\n", *(ptr+2));
  printf("Element 3 = %d\n", *(ptr+3));

  return 0;
}