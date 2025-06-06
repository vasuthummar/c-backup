#include <stdio.h>
int main()
{
    int val,fd,ld;
    printf("Enter a value=");
    scanf("%d", &val);

    ld=val%10;
    val=val/10;

    while(val > 0)
    {
        fd=val%10;
        val=val/10;
    }

    printf("Sum of first and last digit is=%d", fd+ld);

    return 0;
}