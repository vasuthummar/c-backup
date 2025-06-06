#include <stdio.h>
int main()
{
    float km,m,cm,feet;
    printf("Enter a Kilometers=");
    scanf("%f", &km);

    m=km*1000;
    cm=m*100;
    feet=cm/30.48;

    printf("Feets=%f", feet);

    return 0;
}