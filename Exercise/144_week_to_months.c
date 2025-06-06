#include <stdio.h>
int main()
{
    float week,year,month;
    printf("Enter a Weeks=");
    scanf("%f", &week);

    year=week/52;
    month=year*12;

    printf("Months=%f", month);

    return 0;
}