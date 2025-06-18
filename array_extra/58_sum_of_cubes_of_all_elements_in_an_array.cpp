//Find the sum of cubes of all elements in an array.
#include <iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    int sum=0;

    for(int i=0;i<5;i++)
    {
        sum+=arr[i]*arr[i]*arr[i];
    }

    cout << "Sum of all element cubes=" << sum << endl;

    return 0;
}