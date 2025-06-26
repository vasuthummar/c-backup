#include <stdio.h>
int main()
{
  char line[100];
  printf("Enter a line of text:\n");
  gets(line);

  printf("%s", line);
  return 0;
}