#include <stdio.h>
int main()
{
    float day,hour,min;
    printf("Enter a Days=");
    scanf("%f", &day);

    hour=day*24;
    min=hour*60;

    printf("Minutes=%f", min);

    return 0;
}