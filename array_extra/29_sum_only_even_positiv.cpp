//Find the sum of elements at even positions (index 0, 2, 4, etc.) in an array.
#include <iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5},sum=0;

    for(int i=0;i<5;i++)
    {
        if(i%2==0)
            sum=arr[i]+sum;
    }
    cout<<"sum of even number = "<< sum;
    return 0;
}
