#include <stdio.h>
int main()
{
    int year,day,hour,min;
    printf("Enter a numbrer of a year=");
    scanf("%d", &year);

    day=year*365;
    hour=day*24;
    min=hour*60;

    printf("Minutes=%d", min);

    return 0;
}