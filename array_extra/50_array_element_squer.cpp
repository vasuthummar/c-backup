//Print elements of an array along with their square values.

#include <iostream>
using namespace std;

int main()
{
  int arr[5]={1,2,3,4,5};

  for(int i=0;i<5;i++)
   {
      cout<<arr[i]*arr[i]<<" is a square number of "<< arr[i]<<endl;
   }
   return 0;
}