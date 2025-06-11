  //54321
   //5432
    //543
     //54
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

        for(j=5; j>=i; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }
    return 0;
}