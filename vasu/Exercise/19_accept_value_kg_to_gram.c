#include <stdio.h>
int main()
{
    int kg,grm;

    printf("Enter a Kilograme=");
    scanf("%d", &kg);

     grm=kg*1000;

    printf("Grams=%d", grm);

    return 0;
}