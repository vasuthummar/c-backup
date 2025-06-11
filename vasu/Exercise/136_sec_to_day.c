#include <stdio.h>
int main()
{
    float sec,min,hour,day;
    printf("Enter a Seconds=");
    scanf("%f", &sec);

    min=sec/60;
    hour=min/60;
    day=hour/24;

    printf("Days=%f", day);

    return 0;
}