#include <stdio.h>
int main()
{
    float year,month;

    printf("Enter a Year=");
    scanf("%f", &year);

    month=year*12;

    printf("Month=%f", month);

    return 0;

}