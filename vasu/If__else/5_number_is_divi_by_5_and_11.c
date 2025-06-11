#include <stdio.h>
int main()
{
    int val;
    printf("Enter a Number=");
    scanf("%d", &val);

    if(val%55==0)
    printf("Number is divisble by 5 and 11");
    else
    printf("Number is not divisble by 5 and 11");

    return 0;
}