#include <stdio.h>
int main()
{
    float km,m,cm,inch;
    printf("Enter a Kilometers=");
    scanf("%f", &km);

    m=km*1000;
    cm=m*100;
    inch=cm/2.54;

    printf("Inches=%f", inch);

    return 0;
}