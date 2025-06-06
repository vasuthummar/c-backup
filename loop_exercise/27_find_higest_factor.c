#include <stdio.h>
int main()
{
    int i=1,val,fact=0;
    printf("Enter a number=");
    scanf("%d", &val);

    while(i<val)
    {
        if(val%i==0)
        {
            fact=i;
        }

        i++;
    }
    
    printf("Higest factor=%d", fact);

    return 0;
}