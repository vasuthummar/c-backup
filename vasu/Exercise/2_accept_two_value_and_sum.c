#include <stdio.h>
int main()

{
    int a,b;

    printf("Enter first value=");
    scanf("%d", &a);

    printf("Enter second value=");
    scanf("%d", &b);

    int sum=a+b;

    printf("Sum of %d and %d is %d", a, b, sum);

    return 0;

}