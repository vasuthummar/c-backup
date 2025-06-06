#include <stdio.h>
int main()
{
    int i, arr[]={12,10};

    if(arr[0] > arr[1] )
        printf("%d is a maximum and %d is minimum", arr[0], arr[1]);
    else
        printf("%d is a maximum and %d is minimum", arr[1], arr[0]);

    return 0;
}
