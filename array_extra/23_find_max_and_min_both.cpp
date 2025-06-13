//Find both maximum and minimum values from an array of 10 numbers
#include <iostream>
using namespace std;

int main()
{
    int arr[10]={5,4,1,2,3},max=0,min=0;

    max=arr[0];
    min=arr[0];

    for(int i=0;i<5;i++)
    {
        if(arr[i]>max)
            max=arr[i];

    }

    for(int i=0;i<5;i++)
    {
      if(arr[i]<min)
        min=arr[i];
    }

    cout<<"Max number is "<< max << endl << "Min number is " << min  << endl;

    return 0;
}