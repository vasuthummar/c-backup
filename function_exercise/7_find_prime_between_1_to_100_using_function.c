#include <stdio.h>

void printPrime(int);

int main()
{
    int val;
    printPrime(val);

    return 0;
}

void printPrime(int val)
{
    int i=2,range=3;

    while(range <= 100)
    {
        i = 2;
        val = range;

        while(i<val)
        {
            if(val % i == 0)
                break;

            i++;
        }

        if(val == i)
            printf("%d is prime\n", val);

        range++;
    }

}