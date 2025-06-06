 //12345
  //1234
   //123
    //12
     //1

#include <stdio.h>
int main()
{
    int i=5,j=0;

    for(i=5; i>=1; i--)
    {
        for(j=5; j>=i; j--)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}