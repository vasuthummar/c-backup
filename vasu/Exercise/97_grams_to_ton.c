#include <stdio.h>
int main()
{
    float gram,kg,ton;
    printf("Enter a Grams=");
    scanf("%f", &gram);

    kg=gram/1000;
    ton=kg/1000;


    printf("Tons=%f", ton);
    return 0;
}