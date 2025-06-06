#include <stdio.h>
int main()
{
    int cen,year,day,hour,min,sec;

    printf("Enter a Centuries=");
    scanf("%d", &cen);

    year=cen*100;
    day=year*365;
    hour=day*24;
    min=hour*60;
    sec=min*60;

    printf("Second=%d", sec);

    return 0;

}