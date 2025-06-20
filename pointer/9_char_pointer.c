#include <stdio.h>
int main()
{
  char ch = 'A';
  char *ptr_ch;
  char name[] = "Hello";
  char *ptr_str;

  ptr_ch = &ch;
  ptr_str = name;

  printf("charecter = %c\n", ch);
  printf("Through pointer = %c\n", *ptr_ch);
  printf("String: %s\n", name);
  printf("ptr_string = %s\n", ptr_str);
  printf("First charecter of string = %c\n", *ptr_str);

  return 0;
}