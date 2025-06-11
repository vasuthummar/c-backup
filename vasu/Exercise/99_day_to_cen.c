#include <stdio.h>
int main()
{
    float day,year,cen;
    printf("Enter a Days=");
    scanf("%f", &day);

    year=day/365;
    cen=year/100;

    printf("Centuries=%f", cen);
    return 0;
}