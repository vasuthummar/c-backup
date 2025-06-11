#include <stdio.h>
int main()
{
    int arr[]={2, 6, 7, 9, 10};
    int max=0, sl=0;

    max = arr[0];

    for (int i=0; i<5; i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }

    sl = arr[0];

    for (int i =1; i<5; i++)
    {
        if(arr[i]>sl && arr[i]<max)
            sl=arr[i];
    }

    printf("%d", sl);

    return 0;
}