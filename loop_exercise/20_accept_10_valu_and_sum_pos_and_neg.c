#include <stdio.h>
int main()
{
    int i=1,ps=0,ns=0,val;
    while(i <= 10)
    {
        printf("Enter a value=");
        scanf("%d", &val);

        if(val > 0)
        {
            ps=ps+val;
        }
        else
        {
            ns=ns+val;
        }

        i++;
    }

    printf("Sum of positiv value=%d\n", ps);
    printf("Sum of negetiv value=%d\n", ns);

    return 0;

}