#include <stdio.h>
void dosum();

int main()
{
    dosum();

    return 0;
}

void dosum()
{
    int val1=10,val2=20,sum;

    sum=val1+val2;
    printf("The sum of %d and %d is %d", val1, val2, sum);
    
}