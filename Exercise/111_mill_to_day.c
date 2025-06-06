#include <stdio.h>
int main()
{
    float mill,year,day;
    printf("Enter a Millennium=");
    scanf("%f", &mill);

    year=mill*1000;
    day=year*365;

    printf("Days=%f", day);

    return 0;
}