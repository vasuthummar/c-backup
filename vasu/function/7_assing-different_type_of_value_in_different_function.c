#include <stdio.h>
#include <stdbool.h>

void printInteger(int);
void printLong(long);
void printFloat(float);
void printDouble(double);
void printCharacter(char);
void printString(char[]);
void printBoolean(bool);

int main()
{
    printInteger(25);
    printInteger(2554);
    printFloat(32.54);
    printDouble(522152.55);
    printCharacter('v');
    printString("hiiiiii");
    printBoolean(true);

    return 0;
}

void printInteger(int val)
{
    printf("the value is %d\n", val);
}

void printLong(long val)
{
    printf("The value is %d\n", val);
}

void printFloat(float val)
{
    printf("The value is %.2f\n", val);
}

void printDouble( double val)
{
    printf("The value is %.2lf\n", val);
}

void printCharacter(char val)
{
    printf("The value is %c\n", val);
}

void printString(char val[])
{
    printf("The value is %s\n", val);
}

void printBoolean(bool val)
{
    printf("The value is %d\n", val);
}