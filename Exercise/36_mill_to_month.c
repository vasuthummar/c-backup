#include <stdio.h>
int main()
{
    float mill,year,month;
    printf("Enter a millennium=");
    scanf("%f", &mill);

    year=mill*1000;
    month=year*12;

    printf("Months=%f", month);

    return 0;

}