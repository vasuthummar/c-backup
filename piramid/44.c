#include <stdio.h>
int main()
{
    int i=5,j=0;

    for(i=5; i>=1; i--)
    {
        for(j=0; j<=i; j++)
        {
            printf(" ");
        }

        for(j=5; j>=i; j--)
        {
            printf("%d", j);
        }

        for(j=5; j<5; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }
    return 0;
}