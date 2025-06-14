//Count how many negative numbers are present in an array.
#include <iostream>
using namespace std;

int main()
{
    int arr[]={10,-5,-489,6,654,5,-54,-6485,5,-46},cnt=0;

    for (int i=0;i<10;i++)
    {
        if(arr[i]<0)
            cnt++;
    }
    cout << "negetiv number in array is " << cnt;

    return 0;
}