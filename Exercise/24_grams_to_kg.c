#include <stdio.h>
int main()
{
    int gm,kg;

    printf("Enter a Grams=");
    scanf("%d", &gm);

    kg=gm/1000;

    printf("Kilograms=%d", kg);

    return  0;
}