#include <stdio.h>

void isArmstrong(int);

int main()
{
    int val=0;
        printf("Enter a value=");
        scanf(" %d", &val);
    
        isArmstrong(val);

    return 0;
}

void isArmstrong(int val)
{
    int digit=0,sum=0, smp=val;

    while(val > 0)
    {
        digit=val%10;
        sum=sum+(digit*digit*digit);
        val=val/10;
    }

    if(smp==sum)
        printf("It is a armstrong");
    else
        printf("It is not a armstrong");
}