//Calculate the sum of only positive numbers in an array.
#include <iostream>
using namespace std;
int main()
{
    int arr[5]={-1,2,-3,4,5},sum=0;

    for(int i=0;i<5;i++)
    {
        if(arr[i]>0)
        sum=arr[i]+sum;
    }
    cout<<"sum of positiv number = "<< sum;
    return 0;
}
