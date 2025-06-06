#include <stdio.h>
void printFactorials(int);

int main()
{
    int val;

    printFactorials(val);

    return 0;
}

void printFactorials(int val)
{
        int fac=1;
    printf("Enter a value=");
    scanf("%d", &val);

    while(val >=1)
    {
        fac=fac*val;
        val--;
    }
    printf("Factorial=%d", fac);

}