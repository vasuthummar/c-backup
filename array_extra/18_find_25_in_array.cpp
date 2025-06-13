//Check if the number 25 exists in an array of 8 integers.
#include <iostream>
using namespace std;

int main()
{
  int arr[10]={1,2,3,4,5,6,7,8,9,10},val;

  cout<<"Enter a number= ";
  cin>>val;

  for(int i=0; i<10; i++)
    {
        if(val==arr[i])
        {
            cout << "found";
               break;
        }
         else
         {
            cout << "not found";
             break;
         }
    }
    return 0;
}