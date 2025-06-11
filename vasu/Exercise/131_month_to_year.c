#include <stdio.h>
int main()
{
    float month,year;
    printf("Enter a Months=");
    scanf("%f", &month);

    year=month/12;

    printf("Years=%f", year);

    return 0;
}