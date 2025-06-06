#include <stdio.h>
int main()
{
    float year,cen;
    printf("Enter a years=");
    scanf("%f", &year);

    cen=year/100;

    printf("Centuries=%f", cen);

    return 0;
}