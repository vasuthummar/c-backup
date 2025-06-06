#include <stdio.h>
int main()
{
    int val,cnt=0;
    printf("Enter a value=");
    scanf("%d", &val);
    
        while(val > 0)
        { 
            val=val/10;
            cnt++;
        }
    

    printf("Total number of digit=%d", cnt);

    return 0;
}