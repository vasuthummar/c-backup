#include  <stdio.h>
int main()
{
    int val;
    printf("Enter a number=");
    scanf("%d", &val);

    if(val%2==0)
    printf("Number is even");
    else
    printf("Number is odd");

    return 0;
}