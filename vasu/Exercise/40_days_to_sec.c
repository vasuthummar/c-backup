#include <stdio.h>
int main()
{
    float day,hour,min,sec;
    printf("Enter a Days=");
    scanf("%f", &day);

    hour=day*24;
    min=hour*60;
    sec=min*60;

    printf("Seconds=%f", sec);

    return 0;

}