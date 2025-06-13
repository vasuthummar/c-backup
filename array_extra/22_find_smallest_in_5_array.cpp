//Find the smallest number in an array of 5 integers
#include <iostream>
using namespace std;

int main()
{
    int arr[10]={5,4,1,2,3},min=0;

    min=arr[0];

    for(int i=0;i<5;i++)
    {
        if(arr[i]<min)
            min=arr[i];

    }
    cout<<"Min number is "<< min << endl;
    return 0;
}