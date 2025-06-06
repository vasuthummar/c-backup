#include <stdio.h>

void printHcf(int);

int main()
{
    int hcf;
    printHcf(hcf);

    return 0;
}

void printHcf(int hcf)
{
     int i=1,val1,val2;
     hcf=0;
    printf("Enter a first value=");
    scanf("%d", &val1);

    printf("Enter a second value=");
    scanf("%d", &val2);

    while(i <= val1 && i <= val1)
    {
        if(val1%i==0 && val2%i==0)
        {
            hcf=i;
        }

        i++;
    }

    printf("%d", hcf);
}