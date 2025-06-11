#include <stdio.h>
int main()
{
    float day,year,month;
    printf("Enter a Days=");
    scanf("%f", &day);

    year=day/365;
    month=year*12;

    printf("Months=%f", month);
    return 0;
}