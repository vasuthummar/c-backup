#include <stdio.h>
int main()
{
    int even=0,odd=0,i=0,arr[]={1,2,3,4,5,6,7,8,9};

    for(i=0; i<9; i++)
    {
        if(arr[i]%2==0)
            even ++;
        else
            odd++;
    }
    printf("total number of even=%d\n", even);
    printf("total number of odd=%d\n", odd);

    return 0;

}