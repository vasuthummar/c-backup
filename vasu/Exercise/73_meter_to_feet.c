#include <stdio.h>
int main()
{
    float m,cm,feet;
    printf("Enter a Meters=");
    scanf("%f", &m);

    cm=m*100;
    feet=cm/30.48;

    printf("feet=%f", feet);
    return 0;
}