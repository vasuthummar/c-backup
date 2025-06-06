#include <stdio.h>
int main()
{
    int val;
    printf("Enter a number=");
    scanf("%d", &val);

    if(val%5==0)
    printf("Number is divisble with 5");
    else
    printf("Number is not divisble with 5");

    return 0;
    
}