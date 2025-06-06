//10101
//1010
//101
//10
//1

#include <stdio.h>
int main()
{
    int i=5,j=0;
    for(i=5; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", j%2);
        }
        printf("\n");
    }
    return 0;
}