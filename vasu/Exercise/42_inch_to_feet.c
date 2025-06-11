#include <stdio.h>
int main()
{
    float inch,feet;
    printf("Enter a Inches=");
    scanf("%f", &inch);

    feet=inch/12;

    printf("Feet=%f", feet);
    return 0;
}