#include <stdio.h>
int main()
{
    float month,year,cen;
    printf("Enter a Months=");
    scanf("%f", &month);

    year=month/12;
    cen=year/100;

    printf("Centuries=%f", cen);
    return 0;
}