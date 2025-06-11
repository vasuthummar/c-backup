#include <stdio.h>

void printCube(int);

int main()
{
    int val=0;

    printf("Enter a value=");
    scanf("%d", &val);

    printCube(val);

    return 0;
}

void printCube(int val)
{
    int cube;

    cube=val*val*val;

    printf("%d is a cube of %d", cube, val);
}