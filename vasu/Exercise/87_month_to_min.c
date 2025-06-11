#include <stdio.h>
int main()
{
    float month,year,day,hour,min;
    printf("Enter a Months=");
    scanf("%f", &month);

    year=month/12;
    day=year*365;
    hour=day*24;
    min=hour*60;

    printf("Minutes=%f", min);
    return 0;
}