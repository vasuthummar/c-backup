#include <stdio.h>
int main()
{
    float mile,km,m,cm,feet;
    printf("Enter a Miles=");
    scanf("%f", &mile);

    km=mile*1.6;
    m=km*1000;
    cm=m*100;
    feet=cm/30.48;

    printf("Feets=%f", feet);

    return 0;
}