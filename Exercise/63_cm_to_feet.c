#include <stdio.h>
int main()
{
    float cm,feet;
    printf("Enter a Centimeter=");
    scanf("%f", &cm);

    feet=cm/30.48;

    printf("Feets=%f", feet);
    return 0;
}