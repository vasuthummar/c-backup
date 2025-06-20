#include <stdio.h>
int main()
{
  int *ptr = NULL;
  int num = 25;

  printf("ptr is NULL = %p\n", ptr);

  if(ptr == NULL)
  {
    printf("ptr is NULL,cannot use it\n");
  }

  ptr = &num;

  if(ptr != NULL)
  {
    printf("Now ptr points to num : %d\n", *ptr);
  }

  return 0;
}