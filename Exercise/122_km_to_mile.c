#include <stdio.h>
int main()
{
    float km,mile;
    printf("Enter a Kilometers=");
    scanf("%f", &km);

    mile=km/1.6;

    printf("Miles=%f", mile);

    return 0;
}