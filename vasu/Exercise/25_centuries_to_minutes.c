#include <stdio.h>
int main()
{
    int cen,year,day,hour,min;

    printf("Enter a Centuries=");
    scanf("%d", &cen);

    year=cen*100;
    day=year*365;
    hour=day*24;
    min=hour*60;

    printf("Minutes=%d",min);

    return 0;
}