#include <stdio.h>
int main()
{
    int val1;

    printf("Enter a number=");
    scanf("%d", &val1);

    if(val1 > 0)
       printf("Number is positiv");
    else
        printf("Number is negativ");

    return 0;
}