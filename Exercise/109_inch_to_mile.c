#include <stdio.h>
int main()
{
    float inch,cm,m,km,mile;
    printf("Enter a Inchs=");
    scanf("%f", &inch);

    cm=inch*2.54;
    m=cm/100;
    km=m/1000;
    mile=km/1.6;

    printf("Miles=%f", mile);

    return 0;
}