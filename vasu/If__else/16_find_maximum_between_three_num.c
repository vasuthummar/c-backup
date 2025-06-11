#include <stdio.h>
int main()
{
    int a,b,c;

    printf("Enter a first num=");
    scanf("%d", &a);

    printf("Enter a second num=");
    scanf("%d", &b);

    printf("Enter a third num=");
    scanf("%d", &c);

    if(a>b && a>c)
    
     
      
        printf("%d is biggest value", a);
      
    
    else if(b>a && b>c)
        
        printf("%d is biggest value", b);
    else 
    
        printf("%d is biggest value", c);
    
        return 0;
}