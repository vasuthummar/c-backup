#include <stdio.h>
int main()
{
  int num1 = 5, num2 = 50;
  int *p1, *p2;
  int temp;

  p1 = &num1;
  p2 = &num2;

  printf("\nBefore seap\n");
  printf("num1 = %d, num2 = %d", num1, num2);

  temp = *p1;
  *p1 = *p2;
  *p2 = temp;

  printf("\nAfter seap\n");
  printf("num1 = %d, num2 = %d", num1, num2);

  return 0;
}
