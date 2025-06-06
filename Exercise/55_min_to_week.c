#include <stdio.h>
int main()
{
    float min,hour,day,week;
    printf("Enter a Minutes=");
    scanf("%f", &min);

    hour=min/60;
    day=hour/24;
    week=day/7;

    printf("Weeks=%f", week);
    return 0;
}