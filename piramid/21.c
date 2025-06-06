//55555
 //4444
  //333
   //22
    //1

#include <stdio.h>
int main()
{
    int i=5,j=0;

    for(i=5; i>=1; i--)
    {
        for(j=4; j>=i; j--)
        {
            printf(" ");
        }

        for(j=i; j>=1; j--)
        {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}