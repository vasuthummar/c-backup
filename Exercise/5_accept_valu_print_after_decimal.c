#include <stdio.h>
int main()
{
    float a;

    printf("Enter a float value=");
    scanf("%f", &a);

    int b=(int)a;
    float fractional_value=a-b;

    printf("Fractional part of %f is %f\n", a, fractional_value);

    return 0;
}
