//Count how many zeros are present in an array.
#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,0,4,5,0,7,8,0,10},cnt=0;

    for (int i=0;i<10;i++)
    {
        if(arr[i]==0)
            cnt++;
    }
    cout << "zero in array is " << cnt;

    return 0;
}