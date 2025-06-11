#include <stdio.h>
int main()
{
    int val;
    printf("Enter a value=");
    scanf("%d", &val);

    if(val<0)
    printf("Not valid");

    else if(val%3 == 0 && val%7 == 0)
    printf("%d is multipel of 3 or 7", val);

    else 
    printf("%d is not multipul of 3 or 7", val);

    return 0;
}
