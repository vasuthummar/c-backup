#include <stdio.h>
int main()
{
    int min,hour,day,year,cen;

    printf("Enter a Minutes=");
    scanf("%d", &min);

    hour=min/60;
    day=hour/24;
    year=day/365;
    cen=year/100;

    printf("Centuries=%d", cen);

    return 0;

}