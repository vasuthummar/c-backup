//Write a program to read 5 integers from the user and store them in an array.
#include <stdio.h>
int main()
{
    int arr[10];

    for(int i=0; i<10; i++)
    {
        printf("Enter a value %d=", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}