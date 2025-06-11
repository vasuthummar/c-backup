#include <stdio.h>
int main()
{
    float hour,min,sec;
    printf("Enter a Hours=");
    scanf("%f", &hour);

    min=hour*60;
    sec=min*60;

    printf("Seconds=%f", sec);

    return 0;
}