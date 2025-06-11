#include <stdio.h>
int main()
{
    float inch,cm,m,km;
    printf("Enter a Inchs=");
    scanf("%f", &inch);

    cm=inch*2.54;
    m=cm/100;
    km=m/1000;

    printf("Kilometers=%f", km);
    return 0;
}