#include <stdio.h>
int main()
{
    int a,b;

    printf("Enter a first value=");
    scanf("%d", &a);

    printf("Enter a second value=");
    scanf("%d", &b);

    a=a+b;
    b=a-b;
    a=a-b;


    
    printf("First value is =%d\n", a);
    printf("second value is =%d", b);

    return 0;

}