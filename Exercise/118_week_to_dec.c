#include <stdio.h>
int main()
{
    float week,year,dec;
    printf("Enter a Weeks=");
    scanf("%f", &week);

    year=week/52;
    dec=year/10;

    printf("Decands=%f", dec);

    return 0;
}