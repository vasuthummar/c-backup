#include <stdio.h>
int main()
{
    float mile,km,m,cm,inch;
    printf("Enter a Miles=");
    scanf("%f", &mile);

    km=mile*1.6;
    m=km*1000;
    cm=m*100;
    inch=cm/2.54;

    printf("Inches=%f", inch);

    return 0;
}