//Print all elements of an array that are greater than 50.
#include <iostream>
using namespace std;

int main()
{
    int arr[]={81,52,3,94,105,6,57,548,109,10},i=0;

    for(i=0;i<10;i++)
    {
        if(arr[i]>50)
            cout << " " << arr[i];
    }
    return 0;
}