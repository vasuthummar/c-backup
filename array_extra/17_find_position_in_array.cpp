//Find the position (index) of a given element in an array.
#include <iostream>
using namespace std;

int main()
{
  int arr[]={1,2,3,4,5,6,7,8,9,10};
  int val;

  cout<<"Enter a number= ";
  cin>>val;

  for(int i=0; i<10; i++)
    {

       if(val==arr[i])
           cout<<"the positon is "<<i;
    }

    return 0;
}
