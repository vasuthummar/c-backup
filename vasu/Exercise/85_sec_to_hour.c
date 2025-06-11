#include <stdio.h>
int main()
{
    float sec,min,hour;
    printf("Enter a Seconds=");
    scanf("%f", &sec);

    min=sec/60;
    hour=min/60;

    printf("Hours=%f", hour);
    return 0;
}