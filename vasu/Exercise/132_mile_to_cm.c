#include <stdio.h>
int main()
{
    float mile,km,m,cm;
    printf("Enter a Miles=");
    scanf("%f", &mile);

    km=mile*1.6;
    m=km*1000;
    cm=m*100;

    printf("Centimeters=%f", cm);

    return 0;
}