#include <stdio.h>
int main()
{
    int i=1,val,cnt=0;
    while(i <= 10)
    {
        printf("Enter a value=");
        scanf("%d", &val);

        if(val%2!=0)
            {
                cnt++;
            }
        i++;
    }
    printf("Total number of odd value is=%d", cnt);

    return 0;
}