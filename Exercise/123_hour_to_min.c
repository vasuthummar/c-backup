#include <stdio.h>
int main()
{
    float hour,min;
    printf("Enter a Hours=");
    scanf("%f", &hour);

    min=hour*60;

    printf("Minutes=%f", min);

    return 0;
}