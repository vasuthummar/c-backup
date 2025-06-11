#include <stdio.h>
int main()
{
    int i=2, val, range=3;

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

    return 0;
}