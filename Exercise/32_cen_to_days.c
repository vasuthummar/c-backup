#include <stdio.h>
int main()
{
    float cen,year,day;
    printf("Enter a Centuries=");
    scanf("%f", &cen);

    year=cen*100;
    day=year*365;

    printf("Days=%f", day);

    return 0;

}