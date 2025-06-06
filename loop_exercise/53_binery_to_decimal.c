#include <stdio.h>
int main()
{
    int binary,val=0,rem=0,base=1;
    printf("Enter a binary value=");
    scanf("%d", &binary);

    while(binary > 0)
    {
        rem=binary%10;
        val=val+(rem*base);
        base=base*2;
        binary=binary/10;
    }

    printf("%d", val);

    return 0;
}