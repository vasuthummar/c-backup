#include <stdio.h>
int main()
{
    int val,fac=1;
    printf("Enter a value=");
    scanf("%d", &val);

    while(val >=1)
    {
        fac=fac*val;
        val--;
    }
    printf("Factorial=%d", fac);

    return 0;
}