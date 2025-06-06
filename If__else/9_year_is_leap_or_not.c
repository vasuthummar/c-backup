#include  <stdio.h>
int main()
{
    int year;
    printf("Enter a year=");
    scanf("%d", &year);

    if(year%4==0)
    printf("is leap year");
    else
    printf("is not leap year");

    return 0;
}