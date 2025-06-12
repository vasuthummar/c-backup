//Count the total number of elements in an array of size 12.
#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12};
    int cnt=0;

    for(int i=0; i<12; i++)
    {
        cnt++;
    }
    printf("total num of element of array=%d", cnt);

    return 0;
}
