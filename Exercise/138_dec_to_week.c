#include <stdio.h>
int main()
{
    float dec,year,week;
    printf("Enter a Decands=");
    scanf("%f", &dec);

    year=dec*10;
    week=year*52;

    printf("=%f", week);

    return 0;
}