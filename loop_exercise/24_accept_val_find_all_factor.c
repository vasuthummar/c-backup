#include <stdio.h>
int main()
{
    int val,i=1;
    printf("Enter a value=");
    scanf("%d", &val);
    while(i <= val)
    {
        if(val%i==0)
        {
            printf("%d\n", i);

        }
        i++;
    }

    return 0;

}