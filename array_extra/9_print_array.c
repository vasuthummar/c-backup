//Take input for an array of 7 integers and display them in the same order.
#include <stdio.h>
int main()
{
    int arr[7];

    for(int i=0; i<7; i++)
    {
        printf("Enter a value %d=", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<7; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}