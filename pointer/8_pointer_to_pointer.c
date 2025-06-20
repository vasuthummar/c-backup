#include <stdio.h>
int main()
{
  int value = 50;
  int *ptr;
  int **ptr_to_ptr;

  ptr = &value;
  ptr_to_ptr = &ptr;

  printf("value is %d\n", value);
  printf("ptr is %d\n", *ptr);
  printf("ptr_to_ptr is %d\n", *ptr_to_ptr);

  **ptr_to_ptr = 100;

  printf("\nAfter change:\n");
  printf("value is %d\n", value);

  return 0;
}