#include <stdio.h>
int main()
{
    float ton,kg,gm;
    printf("Enter a Tons=");
    scanf("%f", &ton);

    kg=ton*1000;
    gm=kg*1000;

    printf("Gram=%f", gm);
    return 0;
}