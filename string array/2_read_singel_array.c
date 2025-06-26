#include <stdio.h>
int main()
{
  char name[50];
  printf("Enter name: ");
  scanf("%49s", name);

  printf("Your Entered: %s\n", name);
  return 0;
}