#include <stdio.h>
int main()
{
    float dec,year,day,hour,min;
    printf("Enter a Decands=");
    scanf("%f", &dec);

    year=dec*10;
    day=year*365;
    hour=day*24;
    min=hour*60;


    printf("Minutes=%f", min);
    return 0;
}