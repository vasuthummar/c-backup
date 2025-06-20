#include <stdio.h>
int main()
{
  char *name[4] = {"vasu", "ved", "ridham", "harsh"};
  printf("Name using string pointer:\n");
  for (int i = 0; i < 4; i++)
    {
       printf("%d  %s\n", i+1 , name[i]);
    }

    printf("\nFirst charecter of each name:\n");
    for (int i = 0; i < 4; i++)
      {
        printf("%s start with %c\n", name[i], *name[i]);
      }

      return 0;
}