#include <stdio.h>
int main()
{
    char ans='y';
    int val=0,sum=0;

    do
    {
        printf("Enter a value=");
        scanf("%d", &val);

        sum=sum+val;

        printf("do you want to add more?(y/n)=");
        scanf(" %c", &ans);
    }

    while(ans=='y' || ans=='Y');

    printf("Sum is %d", sum);

    return 0;
}