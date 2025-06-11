#include <stdio.h>
int main()
{
    float year,day,hour;
    printf("Enter a Yeras=");
    scanf("%f", &year);

    day=year*365;
    hour=day*24;

    printf("Hours=%f", hour);
    return 0;
}