//Print all elements of an array that are less than a given number.
#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10},val=0,i=0;

    cout << "Enter a number= ";
    cin >> val;

    for (i=0;i<10;i++)
    {
        if(arr[i]<val)
        cout << " " << arr[i];
    }

    return 0;
}