#include <stdio.h>
int main()
{
    int val,rev=0,digit=0;
    printf("Enter a value=");
    scanf("%d", &val);

    while(val>0)
    {
        rev=(rev*10) + val%10;
        val=val/10;
    }

    while(rev>0)
    {
        digit=rev%10;

            if(digit==0)
                printf("Zero ");

            else if(digit==1)
                printf("One ");
            
            else if(digit==2)
                printf("Two ");

             else if(digit==3)
                printf("Three ");

             else if(digit==4)
                printf("Four ");

             else if(digit==5)
                printf("Five ");

             else if(digit==6)
                printf("Six ");

             else if(digit==7)
                printf("Seven ");

             else if(digit==8)
                printf("Eight ");

             else if(digit==9)
                printf("Nine ");

            rev=rev/10;
    }

    return 0;
}