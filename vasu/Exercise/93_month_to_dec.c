#include <stdio.h>
int main()
{
    float month,year,dec;
    printf("Enter a Months=");
    scanf("%f", &month);

    year=month/12;
    dec=year/10;

    printf("Decands=%f", dec);
    return 0;
}