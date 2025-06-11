#include <stdio.h>
int main()
{
    float month,year,day;
    printf("Enter a Months=");
    scanf("%f", &month);

    year=month/12;
    day=year*365;

    printf("Days=%f", day);

    return 0;
}