#include <stdio.h>
int main()
{
  int a = 10;
  int *p;

  p = &a;

  printf("Before changes :\n");
  printf("a = %d\n", a);
  printf("*p = %d\n", *p);

  *p = 20;

  printf("\nAfter changes through pointer:\n");
  printf("a = %d\n", a);
  printf("*p = %d\n", *p);

  return 0;
}