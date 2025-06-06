#include <stdio.h>
int main()
{
    int i=1,cnt=0,val;
    while(i <= 10)
    {
        printf("Enter a value=");
        scanf("%d", &val);

        if(val < 0)
            {
                cnt++;
            }
        i++;
    }
    printf("Number of negative value is=%d", cnt);

    return 0;
}