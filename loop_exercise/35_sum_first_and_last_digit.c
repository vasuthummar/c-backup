#include <stdio.h>
int main()
{
    int val,fd,sld;
    printf("Enter a value=");
    scanf("%d", &val);

    val=val/10;
    sld=val%10;

    while(val>0)
    {
        fd=val%10;
        val=val/10;
    }

    printf("Sum of first and second last digit=%d", fd+sld);

    return 0;

}