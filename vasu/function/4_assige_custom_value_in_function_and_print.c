#include <stdio.h>
void printvalue(int);

int main()
{
    printvalue(25);        // call first time

    printvalue(43);        // call second time

    return 0;
}
void printvalue(int val)
{
    printf("The value is %d\n", val);
}
