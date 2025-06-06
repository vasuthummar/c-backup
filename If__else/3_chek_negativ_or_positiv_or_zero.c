#include <stdio.h>
int main()
{
    int val;

    printf("Enter a number=");
    scanf("%d", &val);

    if(val==0)
        printf("Number is zero");
    else if(val > 0)
    printf("Number is positiv");
    else
    printf("Number is negativ");

    return 0;
}