#include <stdio.h>
int main()
{
    float inch,cm,m;
    printf("Enter a Inches=");
    scanf("%f", &inch);

    cm=inch*2.54;
    m=cm/100;

    printf("Meters=%f", m);
    return 0;
}