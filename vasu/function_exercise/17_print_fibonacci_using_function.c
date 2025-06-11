#include <stdio.h>
void printFibonacci(int);

int main()
{
    int val;

    printFibonacci(val);

    return 0;
}

void printFibonacci(int val)
{
    int i=1,pv=0,cv=1,nv=0;

    printf(" %d",pv);
    printf(" %d",cv);

    while(i<=8)
    {
        nv=pv+cv;
        printf(" %d", nv);
        pv=cv;
        cv=nv;
        i++;
    }
}