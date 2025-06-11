#include <stdio.h>
int main()
{
    float mill,cen;

    printf("Enter a Millennume=");
    scanf("%f", &mill);

    cen=mill/10;

    printf("Centuries=%f", cen);

    return 0;

}