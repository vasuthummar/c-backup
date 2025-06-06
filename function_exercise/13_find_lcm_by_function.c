#include <stdio.h>
void printLcm(int);

int main()
{
    int lcm;
    printLcm(lcm);

    return 0;
}

void printLcm(int lcm)
{
     int val1,val2,max;
     lcm=1;
    printf("Enter a first value=");
    scanf("%d", &val1);

    printf("Enter a second value=");
    scanf("%d", &val2);

    if(val1>val2)
    {
        max=val1;
    }

    else
    {
        max=val2;
    }

    lcm=max;

    while(lcm%val1!=0 || lcm%val2!=0)
    {
        lcm++;
    }

    printf("%d", lcm);

}