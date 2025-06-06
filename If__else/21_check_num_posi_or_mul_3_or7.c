#include <stdio.h>
int main()
{
    int val;
    printf("Enter a value=");
    scanf("%d", &val);

    if(val > 0)

    {
        else if(val%3 == 0 || val%7 == 0)
        printf("It is a valid");
    }
    

    else
    printf("It is not a valid");

    return 0;

}