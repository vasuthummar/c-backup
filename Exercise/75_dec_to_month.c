#include <stdio.h>
int main()
{
    float dec,year,month;
    printf("Enter a Decands=");
    scanf("%f", &dec);

    year=dec*10;
    month=year*12;


    printf("Months=%f", month);
    return 0;
}