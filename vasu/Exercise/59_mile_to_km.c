#include <stdio.h>
int main()
{
    float mile,km;
    printf("Enter a Miles=");
    scanf("%f", &mile);

    km=mile*1.6;

    printf("Kilometers=%f", km);
    return 0;
}