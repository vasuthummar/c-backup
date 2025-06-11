#include <stdio.h>
int main()
{
    int val1, val2;
    printf("Enter a first value=");
    scanf("%d", &val1);

    printf("Enter a second value=");
    scanf("%d", &val2);

    if (val1==val2)
       {
        printf("not valid value");
       }

    else
     {
        val1=val1+val2;
        val2=val1-val2;
        val1=val1-val2;
    

        printf("value is=%d\n", val1);
        printf("value is=%d", val2);
     }


    return 0;
}