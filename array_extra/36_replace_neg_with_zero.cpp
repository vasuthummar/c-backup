//Replace all negative numbers in an array with 0.
#include <iostream>
using namespace std;

int main()
{
    int arr[]={10,-5,-489,6,654,5,-54,-6485,5,-46};

    for (int i=0;i<10;i++)
    {
        if(arr[i]<0)
            arr[i]=0;
    }

    for (int i=0;i<10;i++)
    {
       cout << " " << arr[i];
    }

    return 0;
}