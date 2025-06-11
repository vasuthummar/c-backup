#include <stdio.h>
int main()
{
    float week,day,hour,min;
    printf("Enter a Weeks=");
    scanf("%f", &week);

    day=week*7;
    hour=day*24;
    min=hour*60;


    printf("Minutes=%f", min);
    return 0;
}