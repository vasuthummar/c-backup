#include <stdio.h>
int main()
{
    int val;
    printf("Enter a value=");
    scanf("%d", &val);

    if(val > 0)
        val=val-(val*2);

    else
        val=val-(val*2);

    printf("Your value is=%d", val);

    return 0;
    
}