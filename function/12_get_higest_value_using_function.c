#include <stdio.h>

int getHighest(int, int);

int main()
{
    printf("Highest value = %d\n", getHighest(20,40));
    printf("Highest value = %d\n", getHighest(43,53));

    return 0;
}

int getHighest(int val1, int val2)
{
    if(val1 > val2)
        return val1;
    else if(val2 > val1)
        return val2;
}