#include <stdio.h>
int main()
{
    int  arr[]={12,10,15,66,7};
    int max=0;
    int min=0;

    max=arr[0];

    for (int i=1; i<5; i++)
    {
        if(max<arr[i])
            max=arr[i];
    }

    printf("%d\n", max);

    min=arr[0];

    for (int i=1; i<5; i++)
    {
        if(min>arr[i])
            min=arr[i];
    }

    printf("%d\n", min);

    return 0;
}
