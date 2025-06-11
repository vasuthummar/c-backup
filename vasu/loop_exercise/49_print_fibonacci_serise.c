#include <stdio.h>
int main()
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

    return 0;
}