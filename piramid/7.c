//101010
//010101
//101010
//010101
//101010

#include <stdio.h>
int main()
{
    int i=1,j=0;
    while(i <= 5)
    {
        j=i;
        while(j <= i+5)
        {
            printf("%d", j%2);
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}