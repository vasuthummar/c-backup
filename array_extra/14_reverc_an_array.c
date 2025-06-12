//Display all elements of an array in reverse order.
#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};

    for(int i=4; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}