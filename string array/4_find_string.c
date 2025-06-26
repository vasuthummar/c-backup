#include <stdio.h>
#include <string.h>
int main()
{
  char msg[] = "Count my length";
  size_t len = strlen(msg);
  printf("%d\n", len);

  return 0;
}