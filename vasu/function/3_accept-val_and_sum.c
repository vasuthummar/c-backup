#include <stdio.h>
void dosum();

int main()
{
    dosum();

    return 0;
}

void dosum()
{
    int val1=0,val2=0,sum=0;

    printf("Enter first value= ");
    scanf("%d", &val1);

    printf("Enter a second value= ");
    scanf("%d", &val2);

    sum=val1+val2;
    printf("The sum of %d and %d is %d", val1, val2, sum);
    
}