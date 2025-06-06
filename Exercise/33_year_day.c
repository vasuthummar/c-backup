#include <stdio.h>
int main()
{
    float year,day;

    printf("Enter a Year=");
    scanf("%f", &year);

    day=year*365;

    printf("Days=%f", day);

    return 0;
}