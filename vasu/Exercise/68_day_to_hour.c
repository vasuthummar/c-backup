#include <stdio.h>
int main()
{
    float day,hour;
    printf("Enter a Days=");
    scanf("%f", &day);

    hour=day*24;

    printf("Hours=%f", hour);
    return 0;
}