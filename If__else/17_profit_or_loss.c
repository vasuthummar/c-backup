#include <stdio.h>
int main()
{
    int sp,mp;

    printf("Enter a Selling price=");
    scanf("%d", &sp);

    printf("Enter a manufacturing price=");
    scanf("%d", &mp);

    if(sp>mp)
    printf("You are is profit");

    else
    printf("you are in loss");

    return 0;
}