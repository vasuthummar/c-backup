#include <stdio.h>
int main()
{
    int val;
    printf("Enter a velue=");
    scanf("%d", &val);

    if(10 <= val && val <= 100)
    printf("Value is between 10 to 100");

    else if(10 <= val && val <= 200)
    printf("Value is betweeen 10 to 200");

    else
    printf("It is not valid");

    return 0;
}