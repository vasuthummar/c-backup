#include <stdio.h>
int main()
{
    int i;
    int arr[]={1,-2,3,-4,5,-6};

    for(i=0; i<6; i++)
    {
        if(arr[i] < 0)
            printf("%d ", arr[i]);
    }

    return 0;
}