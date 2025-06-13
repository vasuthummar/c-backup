//Calculate the sum of all elements in an integer array of size 5.
#include <iostream>
using namespace std;
int main()
{
  int arr[5]={1,2,3,4,5},sum=0;

  for(int i=0;i<5;i++)
  {
    sum=arr[i]+sum;
  }
  cout<<"sum of array = "<< sum;
  return 0;
}
