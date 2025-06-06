//11111
 //2222
  //333
   //44
    //5

#include <stdio.h>
int main()
{
    int i=1,j=0;

    for(i=1; i<=5; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf(" ");
        }

        for(j=i; j<=5; j++)
        {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}