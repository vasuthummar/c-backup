#include <stdio.h>
int main()
{
    int feet,cm,meter;

    printf("Enter a Feet=");
    scanf("%d", &feet);

    cm=feet*30.48;
    meter=cm/100;

    printf("Meter=%d", meter);

    return 0;
}