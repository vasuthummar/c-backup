#include <stdio.h>
#include <string.h>

int main()
{
  char src[] = "Source text";
  char dest[50];
  strcpy(dest, src);
  printf("%s\n", dest);

  return 0;
}