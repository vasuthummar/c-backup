#include <stdio.h>
int main()
{
    int val,sd,sld;
    printf("Enter a value=");
    scanf("%d", &val);

    val=val/10;
    sld=val%10;

    while(val > 10)
    {
        sd=val%10;
        val=val/10;
    }

    printf("Sum of second and second last digit=%d", sd+sld);

    return 0;

}