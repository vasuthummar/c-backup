#include <stdio.h>
int main()
{
    int a,b,c,avg;

    
    printf("Enter a first value=");
    scanf("%d", &a);

    printf("Enter a second value=");
    scanf("%d", &b);

    printf("Enter a third value=");
    scanf("%d", &c);

     avg=(a+b+c)/3;

     printf("Avrege of three value is=%d", avg);

     return 0;
}