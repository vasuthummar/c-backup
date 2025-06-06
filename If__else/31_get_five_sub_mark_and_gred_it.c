#include <stdio.h>
int main()
{
    int total,per,maths,phy,che,eng,com;
    printf("Enter a maths mark=");
    scanf("%d", &maths);

    printf("Enter a physics mark=");
    scanf("%d", &phy);

    printf("Enter a chemistry mark=");
    scanf("%d", &che);
    
    printf("Enter a english mark=");
    scanf("%d", &eng);
   
    printf("Enter a computer mark=");
    scanf("%d", &com);

    total=maths+phy+che+eng+com;
    per=total/5;

    if(per >= 90)
        printf("per=%d and grad is A+", per);
    
        else if(per >= 80)
            printf("per=%d and grad is A", per);

        else if(per >= 70)
            printf("per=%d and grad is B", per);

        else if(per >= 60)
            printf("per=%d and grad is C", per);

        else if(per >= 40)
            printf("per=%d and grad is D", per);

        else    
            printf("per=%d andYou are fail", per);

    return 0;
}