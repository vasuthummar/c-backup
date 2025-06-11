#include <stdio.h>
int main()
{
    int redius;
    printf("Enter a redius=");
    scanf("%d", &redius);

    float area=redius*redius*3.14;

    printf("Area is %f", area);

    return 0;
}