#include <stdio.h>
int main()
{
    float inch,cm;
    printf("Enter a Inches=");
    scanf("%f", &inch);

    cm=inch*2.54;

    printf("Centimeter=%f", cm);

    return 0;
}