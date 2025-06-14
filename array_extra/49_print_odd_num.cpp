//Print all odd numbers from an array.
#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10},i=0;

    for (i=0;i<10;i++)
    {
        if(arr[i]%2!=0)
        cout << " " << arr[i];
    }

    return 0;
}