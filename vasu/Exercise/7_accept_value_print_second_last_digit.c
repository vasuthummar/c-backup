#include <stdio.h>
int main()
{
    int val;
    printf("Enter a value=");
    scanf("%d", &val);

    int a=val/10;
    int second_last=a%10;

    printf("Second last digit of %d is %d", val, second_last);
    return 0;
}