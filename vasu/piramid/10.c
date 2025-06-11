//1
//11
//111
//1111
//11111

#include <stdio.h>
int main()
{
    int i=1,j=0;

    for(i=1; i<=5; i++)
    {
        j=1;
        for(j=1; j<=i; j++)
        {
            printf("1");
        }
        printf("\n");
    }
    return 0;
}