#include <stdio.h>
int main()
{
    int val;
    printf("Enter a value=");
    scanf("%d", &val);

    if(val <= 100 || val >= 200)
        printf("%d is range in 100 to 200 exclusiv", val);

    else
        printf("%d is not range in 100 to 200 exclusiv", val);

        return 0;
}