#include <stdio.h>
int main()
{
    int arr[]={1, 2, 4, 1, 3, 2, 5, 3, 2, 5};
    int index=0;
    int endindex=10;

    for(int i=0; i < endindex; i++)
    {
        for(int j=i+1; j<endindex; j++)
        {
            if(arr[i] == arr[j])
            {
                for(int k=j; k< endindex; k++)
                {
                    arr[k]=arr[k+1];
                }

                endindex --;
            }
        }
    }

    for(int i=0; i<endindex; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}