#include <stdio.h>

int checkValue(int);

int main()
{
    int result=0,val=0;

     printf("Enter a value=");
     scanf("%d", &val);

    result=checkValue(val);

    if(result==1)
        printf("%d is even num", val);
    else
        printf("%d is odd num", val);

    return 0;
}

int checkValue(int val)
{
    if(val%2==0)
        return 1;
    else
        return 2;
}