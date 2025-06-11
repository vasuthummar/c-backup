#include <stdio.h>
int main()
{
    float cen,year;
    printf("Enter a Centuries=");
    scanf("%f", &cen);

    year=cen*100;

    printf("Years=%f", year);

    return 0;
}