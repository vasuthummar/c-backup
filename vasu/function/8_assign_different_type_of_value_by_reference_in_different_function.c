#include <stdio.h>
#include <stdbool.h>

void printInteger(int);
void printLong(long);
void printFloat(float);
void printDouble(double);
void printCharacter(char);
void printString(char []);
void printBoolean(bool);

int main()
{
    int ival=25;
    long lval=2564;
    float fval=32.56;
    double dval=52234.54;
    char cval='v';
    char message[]="hii";
    bool bval=true;

    printInteger(ival);
    printInteger(lval);
    printFloat(fval);
    printDouble(dval);
    printCharacter(cval);
    printString(message);
    printBoolean(bval);

    return 0;
}

void printInteger(int val)
{
    printf("The value is %d\n", val);
}

void printLong(long val)
{
    printf("The value is %ld\n", val);
}

void printFloat(float val)
{
    printf("The value is %.2f\n", val);
}

void printDouble(double val)
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