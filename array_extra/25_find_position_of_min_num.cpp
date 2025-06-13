//Find the position of the minimum element in an array.
#include <iostream>
using namespace std;

int main()
{
    int arr[10]={1,1656,55,5,50,54},min=0,i=0,position=0;

    min=arr[0];

    for(i=0;i<6;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            position=i;
        }
    }

    cout<<"Max number is "<< min << " its position is " << position << endl;

    return 0;
}