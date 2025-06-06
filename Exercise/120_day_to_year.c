#include <stdio.h>
int main()
{
    float day,year;
    printf("Enter a Days=");
    scanf("%f", &day);

    year=day/365;

    printf("Years=%f", year);

    return 0;
}