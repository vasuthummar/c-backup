#include <stdio.h>
int main()
{
    int cen,year,week;
    printf("Enter a Centuries=");
    scanf("%d", &cen);

    year=cen*100;
    week=year*52;

    printf("Weeks=%d", week);
    return 0;
}