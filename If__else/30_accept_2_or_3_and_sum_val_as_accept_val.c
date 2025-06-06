#include <stdio.h>
int main()
{
    int accept,val1,val2,val3;
    
    printf("Enter a first value=");
    scanf("%d", &val1);

    printf("Enter a second value=");
    scanf("%d", &val2);

    printf("Enter a thired value=");
    scanf("%d", &val3);

    printf("Accept=");
    scanf("%d", &accept);


    if(accept == 2)
        printf("%d", val1+val2);

    else if(accept == 3)
        printf("%d", val1+val2+val3);

    else
        printf("Not valid");

        return 0;

}