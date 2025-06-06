#include <stdio.h>
int main()
{
    float m,cm,inch;
    printf("Enter a Meter=");
    scanf("%f", &m);

    cm=m*100;
    inch=cm/2.54;

    printf("Inchs=%f", inch);
    return 0;
}