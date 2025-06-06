#include <stdio.h>

int getAddition(int , int);

int main()
{
    int a=10,b=20,sum=0;

    sum=getAddition(a,b);
    printf("Addition is %d\n", sum);

    return 0;
}

int getAddition(int val1, int val2)
{
    return val1+val2;
}