//Create an array of 4 float numbers, take input from user, and display all elements.
#include <stdio.h>
int main()
{
    float arr[4];

    for(int i=0; i<4; i++)
    {
        printf("Enter a value %d=", i+1);
        scanf("%f", &arr[i]);
    }

    for(int i=0; i<4; i++)
    {
        printf("%f ", arr[i]);
    }

    return 0;
}