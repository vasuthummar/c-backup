#include <stdio.h>

void printEvenAndOdd(int,int);

int main()
{
    int start, end;

    printf("Enter start and end range - ");
    scanf("%d%d", &start, &end);

    printEvenAndOdd(start, end);
    
    return 0;
}

void printEvenAndOdd(int start,int end)
{
     for(int i = start; i <= end; i++)
     {
        if(i%2 == 0)
            printf("%d is even\n", i);
        else
            printf("%d is odd\n", i);
     }
}