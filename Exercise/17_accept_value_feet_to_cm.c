#include <stdio.h>
int main()
{
    int feet,cm;

    printf("Enter a feet=");
    scanf("%d", &feet);

    cm=feet*30.48;

    printf("Centimeter=%d", cm);

    return 0;
}