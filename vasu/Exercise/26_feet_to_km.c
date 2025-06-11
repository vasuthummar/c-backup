#include <stdio.h>
int main()
{
    int feet,cm,m,km;

    printf("Enter a Feet=");
    scanf("%d", &feet);

    cm=feet*30.48;
    m=cm/100;
    km=m/1000;

    printf("Kilometer=%d", km);

    return 0;
}