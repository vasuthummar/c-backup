#include <stdio.h>
int main()
{
    float week,day,hour;
    printf("Enter a Week=");
    scanf("%f", &week);

    day=week*7;
    hour=day*24;

    printf("Hours=%f", hour);

    return 0;
}