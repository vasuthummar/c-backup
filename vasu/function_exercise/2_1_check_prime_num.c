#include <stdio.h>

void isPrime(int);

int main()
{
    int val=0;

     printf("Enter a value=");
     scanf("%d", &val);

     isPrime(val);
    return 0;
}

void isPrime(int val)
{ 
    int i=0;
    for(i=2; i<val; i++)
    {
        if(val%i==0)
            break ;
    }
        if(i==val)
            printf("Prime");
        else  
            printf("Not prime");
}