#include <stdio.h>
int main()
{
    float mill,year,week;

    printf("Enter a Millennium=");
    scanf("%f", &mill);

    year=mill*1000;
    week=year*52;

    printf("Week=%f", week);
    return 0;
}