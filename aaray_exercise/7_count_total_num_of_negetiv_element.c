#include <stdio.h>
int main()
{
    int i=0,negative=0,arr[]={1,-2,3,-4,-5,-7,8};

    for(i=0; i<9; i++)
    {
        if(arr[i] < 0)
            negative++;
    }

    printf("Total number of negative elemets = %d", negative);

    return 0;
}