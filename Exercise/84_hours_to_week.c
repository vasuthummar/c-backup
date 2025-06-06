#include <stdio.h>
int main()
{
    float hour,day,week;
    printf("Enter a Hours=");
    scanf("%f", &hour);

    day=hour/24;
    week=day/7;

    printf("Weeks=%f", week);
    return 0;
}