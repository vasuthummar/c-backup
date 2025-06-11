#include <stdio.h>
int main()
{
    int val;
    printf("Enter a value=");
    scanf("%d", &val);

    if(100 <= val && val <= 999)
    printf("This  is three digit value");

    else 
    printf("This is not three digit value");

    return 0;
}