#include <stdio.h>
int main()
{
    int i=1,val,pcnt=0,ncnt=0,zcnt=0;
    while(i <= 10)
    {
        printf("enter a value=");
        scanf("%d", &val);

        if(val==0)
        {
            zcnt++;
        }

        if(val>0)
        {
            pcnt++;
        }

        if(val<0)
        {
            ncnt++;
        }

        i++;
    }

    printf("Total zeros=%d\n", zcnt);
    printf("Total positiv=%d\n", pcnt);
    printf("Total negetiv=%d\n", ncnt);

    return 0;
}