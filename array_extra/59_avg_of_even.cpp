//Calculate the average of only even numbers in an array.
#include <iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5},sum=0,avg=0,cnt=0;

    for(int i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            sum+=arr[i];
            cnt++;
        }
    }
    avg=sum/cnt;

    cout<<"sum of even number = "<< avg << endl;
    return 0;
}
