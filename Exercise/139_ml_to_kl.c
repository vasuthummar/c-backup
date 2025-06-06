#include <stdio.h>
int main()
{
    float ml,l,kl;
    printf("Enter a Mililiters=");
    scanf("%f", &ml);

    l=ml/1000;
    kl=l/1000;

    printf("Kiloliters=%f", kl);

    return 0;
}