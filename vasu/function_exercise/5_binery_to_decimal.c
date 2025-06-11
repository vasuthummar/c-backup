#include <stdio.h>

void printDecimal(int);

int main()
{
    int binery;
    printf("Enter a binery value=");
    scanf("%d", &binery);

    printDecimal(binery);

    return 0;
}

void printDecimal(int binery)
{
    int val=0,rem=0,base=1;

    while(binery > 0)
    {
        rem=binery%10;
        val=val+(rem*base);
        base=base*2;
        binery=binery/10;
    }

    printf("%d", val);
}