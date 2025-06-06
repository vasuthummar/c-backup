#include <stdio.h>

int  getCalculation(int, int, int);

int main()
{
    printf("Additon is %d\n", getCalculation(20,40,1));
    printf("Substraction is %d\n", getCalculation(40,15,2));
    printf("Division is %d\n", getCalculation(24,3,3));
    printf("multiplication is %d\n", getCalculation(4,6,4));
    printf("Modular is %d\n", getCalculation(123,10,5));

    return 0;
}

int getCalculation(int val1, int val2, int operation)
{
    if(operation == 1)
        return val1 + val2;
    else if(operation == 2)
        return val1 - val2;
    else if(operation == 3)
        return val1 / val2;
    else if(operation == 4)
        return val1 * val2;
    else if(operation == 5)
        return val1 % val2;
}