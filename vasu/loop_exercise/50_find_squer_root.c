#include <stdio.h>
int main()
{
    int val,i=1;
    printf("Enter a value=");
    scanf("%d", &val);

    while(i<val)
    {
        if(i*i > val)
        {
            printf("Squer root is not possible");
            break;
        }

        if(i*i==val)
        {
            printf("%d is squer root", i);
            break;
        }

        i++;
    }

    return 0;
    
}