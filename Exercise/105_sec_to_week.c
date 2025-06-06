#include <stdio.h>
int main()
{
    float sec,min,hour,day,week;
    printf("Enter a Seconds=");
    scanf("%f", &sec);

    min=sec/60;
    hour=min/60;
    day=hour/24;
    week=day/7;

    printf("Weeks=%f", week);

    return 0;
}