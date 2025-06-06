#include <stdio.h>
int main()
{
    int val,i=2;
    printf("Enter a value=");
    scanf("%d", &val);

    while(i < val)
    {
        if(val%i==0)
            break;

        i++;
          
    }

        if(i==val)
        {
            printf("It is a prime");
        }

        else
        {
            printf("It is not a prime");
        }
           
    

   
    return 0;
}   