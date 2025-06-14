//Search for a specific number in an array of 10 integers and print "Found" or "Not Found".
#include <iostream>
using namespace std;

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int val;
    bool found=false;

    cout << "Enter a number : ";
    cin >> val;

    for(int i=0; i<10; i++)
    {

          if(arr[i]==val)
          {
              found=true;
          }
    }

    if(found)
        cout << "found";
    else
        cout << "not found";

    return 0;
}