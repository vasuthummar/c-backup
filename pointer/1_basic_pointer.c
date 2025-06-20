#include <stdio.h>
int main()
{
  int num = 42;
  int *ptr;

  ptr = &num;

  printf("value of num = %d\n", num);
  printf("address of num = %p\n", &num);
  printf("value stored in ptr = %p\n", ptr);
  printf("value pointed by ptr = %d\n", *ptr);

  return 0;
}