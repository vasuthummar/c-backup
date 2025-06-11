#include <stdio.h>
int main()
{
    float day,year,dec;
    printf("Enter a Days=");
    scanf("%f", &day);

    year=day/365;
    dec=year/10;

    printf("Decades=%f", dec);

    return 0;
    
}