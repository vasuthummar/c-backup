#include <stdio.h>
int main()
{
  int num = 42;
  int *ptr = &num;
  char ch = 'x';
  char *char_ptr = &ch;
  double d = 3.14;
  double *double_ptr = &d;

  printf("Size of int: %lu bytes\n", sizeof(num));
  printf("Size of int pointre: %lu bytes\n ", sizeof(ptr));
  printf("Size of char: %lu bytes\n", sizeof(ch));
  printf("Size of char: %lu bytes\n", sizeof(char_ptr));
  printf("Size of double: %lu bytes\n", sizeof(d));
  printf("Size of double: %lu bytes\n", sizeof(double_ptr));

  return 0;
}