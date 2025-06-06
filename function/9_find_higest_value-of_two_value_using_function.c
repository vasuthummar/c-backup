#include <stdio.h>

void findHigest(int, int);

int main()
{
    findHigest(20,40);
    findHigest(50,30);
    findHigest(15,15);

    return 0;
}

void findHigest(int val1, int val2)
{
    if(val1 > val2)
        printf("%d is bigger than %d\n", val1, val2);
    else if(val2 > val1)
        printf("%d is bigger than %d\n", val2, val1);
    else
        printf("%d is equal to %d\n", val1, val2);
}