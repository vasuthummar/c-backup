#include <stdio.h>
int main()
{
    float cm,inch;
    printf("Enter a Centimeters=");
    scanf("%f", &cm);

    inch=cm/2.54;

    printf("Inches=%f", inch);
    return 0;
}