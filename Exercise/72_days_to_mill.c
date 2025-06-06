#include <stdio.h>
int main()
{
    float  day,year,mill;
    printf("Enter a Days=");
    scanf("%f", &day);

    year=day/365;
    mill=year/1000;

    printf("MIllennium=%f", mill);
    return 0;
}