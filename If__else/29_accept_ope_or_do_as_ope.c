#include <stdio.h>
int main()
{
    int val1,val2;
    char op;
    printf("Choose an operetor=");
    scanf("%c", &op);

    printf("Enter a first value=");
    scanf("%d", &val1);

    printf("Enter a second value=");
    scanf("%d", &val2);

   
    if(op == '+')
        printf("%d + %d is =%d", val1,val2,val1+val2);
    else
    {
        if(op == '-')
             printf("%d - %d is =%d", val1,val2,val1-val2);
                    
        else if(op == '*')
             printf("%d * %d is =%d", val1,val2,val1*val2);

        if(op == '/')
             printf("%d / %d is =%d", val1,val2,val1/val2); 
        else
              printf("It is not valid operetor");
            
    }
    return 0;
}