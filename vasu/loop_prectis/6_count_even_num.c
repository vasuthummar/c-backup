#include <stdio.h>
int main()
{
    int count=0,i=1;
    while (i<=100)
    {
        if(i%2 == 0)
         count++;

         i++;
    }
    printf("Number of even is=%d", count);

    return 0;
    
}