#include <stdio.h>
int main()
{
    int val1,val2,sum;

    printf("Enter a first value=");
    scanf("%d", &val1);

    printf("Enter a second value=");
    scanf("%d", &val2);

    sum=val1+val2;

    if(sum==30 || val1==30 || val2==30)
    printf("It is a valid");

    else
    printf("Not valid");

    return 0; 

}
