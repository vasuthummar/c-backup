#include <stdio.h>
int main()
{
    float c,f;
    printf("Enter a Celsius=");
    scanf("%f", &c);

    f=(c*1.8)+32;

    printf("Fahrenheit=%f", f);
    return 0;
}