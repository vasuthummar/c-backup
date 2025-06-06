#include <stdio.h>
int main()
{
    int i=1,val;
    while(i <= 10)
    {
        printf("Enyer a value=");
        scanf("%d", &val);

        if(val < 0)
         {
            printf("Positiv value=%d\n", val);
         }

         i++;
    }

    return 0;
}