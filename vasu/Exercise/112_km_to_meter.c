#include <stdio.h>
int main()
{
    float km,m; 
    printf("Enter a Kilometers=");
    scanf("%f", &km);

    m=km*1000;

    printf("Meters=%f", m);

    return 0;
}