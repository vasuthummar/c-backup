//3
//33
//333
//3333
//33333

#include <stdio.h>
int main()
{
    int i=1,j=0;
    for(i=1; i <= 5; i++)
    {
        for(j=1; j <= i; j++)
        {
            printf("%d", 3);
        }
        printf("\n");
    }

    return 0;
}