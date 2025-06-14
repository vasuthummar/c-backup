//Count how many odd numbers are in an array of integers
#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10},cnt=0;

    for (int i=0;i<10;i++)
    {
        if(arr[i]%2!=0)
            cnt++;
    }
    cout << "odd in array is " << cnt;

    return 0;
}