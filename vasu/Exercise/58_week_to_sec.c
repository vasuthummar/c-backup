#include <stdio.h>
int main()
{
    float week,day,hour,min,sec;
    printf("Enter a Week=");
    scanf("%f", &week);

    day=week*7;
    hour=day*24;
    min=hour*60;
    sec=min*60;

    printf("Seconds=%f", sec);
    return 0;
}