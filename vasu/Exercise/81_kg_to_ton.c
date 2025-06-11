#include <stdio.h>
int main()
{
    float kg,ton;
    printf("Enter a Kilogram=");
    scanf("%f", &kg);

    ton=kg/1000;


    printf("Ton=%f", ton);
    return 0;
}