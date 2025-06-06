#include <stdio.h>

void printInteger(int);
void printFloat(float);

int main()
{
    printInteger(25);
    printFloat(25.26);

    return 0;
}

void printInteger(int val)
{
    printf("The value is %d\n", val);
}

void printFloat(float val)
{
    printf("The value is %.2f\n", val);
}