#include <stdio.h>
int main()
{
    float min,hour;
    printf("Enter a Minutes=");
    scanf("%f", &min);

    hour=min/60;


    printf("Hours=%f", hour);
    return 0;
}