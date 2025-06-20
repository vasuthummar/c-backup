#include <stdio.h>
int main()
{
  int a =  10, b = 20;

  const int *ptr1 = &a;
  printf("Value: %d\n", *ptr1);
  ptr1 = &b;
  printf("New Value: %d\n", *ptr1);

  int *const ptr2 = &a;
  *ptr2 = 30;
  printf("Changed Value: %d\n", *ptr2);

  return 0;
}