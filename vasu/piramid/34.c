

#include <stdio.h>
int main()
{
    int i=1,j=0;

    for(i=1; i<=9; i=i+2)
    {

        for(j=3; j<=i; j+=2)
        {
            printf(" ");
        }

        for(j=i; j<=9; j=j+2)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
} 
