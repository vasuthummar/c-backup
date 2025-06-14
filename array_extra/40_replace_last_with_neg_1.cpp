//Replace the last element of an array with -1.
#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};

    arr[9]=-1;

    for (int i=0;i<10;i++)
    {
       cout << " " << arr[i];
    }

    return 0;
}