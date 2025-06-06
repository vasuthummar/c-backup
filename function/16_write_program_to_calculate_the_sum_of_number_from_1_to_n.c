#include <stdio.h>

int getSumofrange(int);

int main()
{
    int val;
    int sum;

    printf("Input the last number of thr range from 1 to :");
    scanf("%d", &val);

    sum=getSumofrange(val);

    printf("\n The sum of number from 1 to %d : %d\n\n", val, sum);

    return 0;
}

int getSumofrange(int n1)
{
    int res;

    if(n1==1)
        return (1);
    else
        res=n1+getSumofrange(n1-1);

    return (res);
}