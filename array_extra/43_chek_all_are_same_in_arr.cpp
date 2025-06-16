//Check if all elements in an array are the same.
#include <iostream>
using namespace std;

int main()
{
  int arr[5]={1,1,1,1,1};
  bool flag=true;

  for(int i=1;i<5;i++)
    {
      if(arr[0]!=arr[i])
      {
        flag=false;
        break;
      }
    }
    if(flag)
      cout<<"all are same"<<endl;
    else
      cout<<"all are not same"<<endl;

  return 0;
}