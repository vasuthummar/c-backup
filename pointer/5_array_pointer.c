#include <stdio.h>
int main()
{
  int array[3]={1,2,3};
  int *ptr;

  ptr = &array[0];

  printf("Array elements:\n");
  printf("array[0] = %d\n", array[0]);
  printf("array[1] = %d\n", array[1]);
  printf("array[2] = %d\n", array[2]);

  printf("\nUsing pointer:\n");
  printf("*ptr = %d\n", *ptr);
  printf("*(ptr+1) = %d\n", *(ptr+1));
  printf("*(ptr+2) = %d\n", *(ptr+2));

  return 0;
}