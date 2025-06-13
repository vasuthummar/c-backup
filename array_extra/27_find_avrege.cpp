//Find the average of all numbers in an array of 8 integers.
#include <iostream>
using namespace std;
int main()
{
    int arr[8]={1,2,3,4,5,6,7,8},sum=0,avg=0;

    for(int i=0;i<8;i++)
    {
        sum=arr[i]+sum;
    }
    avg=sum/8;
    cout<<"avrege of array = "<< avg;
    return 0;
}
