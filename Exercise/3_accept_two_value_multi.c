#include <stdio.h>
int main()
{
    int a,b;

    printf("Enter a first value=");
    scanf("%d", &a);

    printf("Enter second value=");
    scanf("%d", &b);

    int mul=a*b;

    printf("Multiplication of %d and %d is %d", a, b, mul);

    return 0;
}