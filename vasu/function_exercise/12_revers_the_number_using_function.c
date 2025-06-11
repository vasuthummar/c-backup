#include <stdio.h>

void ReversTheNum(int);

int main()
{
    int  val;

    ReversTheNum(val);
    return 0;
}

void ReversTheNum(int val)
{
    int sum=0,rev=0;
    printf("Enter a value=");
    scanf("%d", &val);

    while (val > 0)
    {
        sum=val % 10;
        rev=(rev*10)+sum;
        val=val/10;
    }

    printf("Revers=%d", rev);

}