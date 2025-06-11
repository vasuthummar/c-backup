#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[] = {1, 2, 3, 2, 4, 5, 1, 3, 2, 5};
    int varr[10];
    int farr[10];
    int cnt = 0;
    bool flag = false;
    int index = 0;

    for(int i=0; i < 10; i++)
    {
        flag=false;
        cnt=0;

        for(int j=0; j < index; j++)
        {
            if(arr[i]==varr[j])
            {
                flag=true;
                break;
            }
        }

        if(flag==false)
        {
            for(int j=i; j<10; j++)
            {
                if(arr[i]==arr[j])
                    cnt++;
            }

            varr[index]=arr[i];
            farr[index]=cnt;
            index++;
        }
    }

    for(int i=0; i < index; i++)
    {
        if(farr[i]==1)
          {
            printf("%d\n", varr[i]);
          }
    }

    return 0;
}