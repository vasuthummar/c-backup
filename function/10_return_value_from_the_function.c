#include <stdio.h>
int getvalue(int);

int main()
{
    int i;

    i= getvalue(25000);
    printf("value = %d\n", i);

    return 0;
}

int getvalue(int val)
{
    return val;
}