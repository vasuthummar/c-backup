#include <stdio.h>
int main()
{
    float dec,year,day;
    printf("Enter a Decands=");
    scanf("%f", &dec);

    year=dec*10;
    day=year*365;

    printf("Days=%f", day);
    return 0;
}