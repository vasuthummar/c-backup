#include <stdio.h>
int main()
{
    float week,year,cen;
    printf("Enter a Weeks=");
    scanf("%f", &week);

    year=week/52;
    cen=year/100;

    printf("Centuries=%f", cen);

    return 0;
}