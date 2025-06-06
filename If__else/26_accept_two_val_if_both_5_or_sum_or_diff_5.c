#include <stdio.h>
int main()
{
    int val1,val2;
    printf("Enter a first value=");
    scanf("%d", &val1);

    printf("Enter a second value=");
    scanf("%d", &val2);

     if(val1 == 5 || val2 == 5 || val1+val2 == 5 || val1-val2 == 5 || val2-val1 == 5)
        printf("true");

    else
        printf("false");

        return 0;
}