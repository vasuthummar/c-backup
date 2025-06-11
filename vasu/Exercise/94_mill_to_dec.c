#include <stdio.h>
int main()
{
    float mill,dec;
    printf("Enter a Millennium=");
    scanf("%f", &mill);

    dec=mill*100;

    printf("Decands=%f", dec);
    return 0;
}