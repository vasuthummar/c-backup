#include <stdio.h>

void dosum(int, int);

int main()
{
    dosum(20,40);
    dosum(53,30);
    dosum(45,55);
    dosum(10,15);

    return 0;
}
void dosum(int val1, int val2)
{
    int sum=0;

    sum=val1+val2;
    printf("The sum of %d and %d is %d\n", val1, val2, sum);
}
