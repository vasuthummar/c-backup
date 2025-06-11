#include <stdio.h>
int main()
{
    float mile,km,m;
    printf("Enter a Miles=");
    scanf("%f", &mile);

    km=mile*1.6;
    m=km*1000;
    

    printf("Meters=%f", m);

    return 0;
}