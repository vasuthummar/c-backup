#include <stdio.h>
int main()
{
    int i=1,j=0;
    while(i <= 5)
    {
        j=5;
        while(j >= 1)
        {
            printf("%d", j);
            j--;
        }

        printf("\n");
        i++;
    }

    return 0;
}