#include <stdio.h>
int main()
{
    int i=1,val,sum=1;
    printf("Enter a value=");
    scanf("%d", &val);
    while(i <= 10)
    {
        sum=val*i;
       
        printf("%d*%d=%d\n", val, i, sum);
        
        i++;
    }
   
    return 0;
    
}