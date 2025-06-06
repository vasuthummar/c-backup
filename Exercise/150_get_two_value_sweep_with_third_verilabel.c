#include <stdio.h>
int main()
{
    int a,b,c=0;

    printf("Enter a first value=");
    scanf("%d", &a);

    printf("Enter a second value=");
    scanf("%d", &b);

    c=a;
    a=b;
    b=c;

    
    printf("First value is =%d\n", a);
    printf("second value is =%d", b);

    return 0;

}