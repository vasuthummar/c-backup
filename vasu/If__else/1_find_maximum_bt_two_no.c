#include <stdio.h>
int main()
{
    int val1,val2;

    printf("Enter a first Number=");
    scanf("%d", &val1);

    printf("Enter a second Number=");
    scanf("%d", &val2);

    if(val1 > val2)
        printf("Maximum number is %d", val1);
    else
         printf("Maximum number is %d", val2);

         return 0;
}
