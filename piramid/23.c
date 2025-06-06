    //5
   //44
  //333
 //2222
//11111

#include <stdio.h>
int main()
{
    int i=1,j=0;

    for(i=5; i>=1; i--)
    {
        for(j=2; j<=i; j++)
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