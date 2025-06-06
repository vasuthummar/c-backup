#include <stdio.h>
int main()
{
    int i=0;

    int arr[5];

    arr[0]=80;
    arr[1]=10;
    arr[2]=30;
    arr[3]=40;
    arr[4]=60;

    for(i=0; i<5; i++)
        printf("%d ", arr[i]);

    return 0;
}