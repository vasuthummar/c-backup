#include <stdio.h>
int main()
{
  int x = 100;
  int *ptr1, *ptr2;

  ptr1 = &x;
  ptr2 = &x;

  printf("x = %d\n", x);
  printf("*ptr1 = %d\n", *ptr1);
  printf("*ptr2 = %d\n", *ptr2);

  *ptr1 = 200;

  printf("x = %d\n", x);
  printf("*ptr1 = %d\n", *ptr1);
  printf("*ptr2 = %d\n", *ptr2);

  return 0;
}