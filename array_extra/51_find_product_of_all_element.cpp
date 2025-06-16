//Find the product of all elements in an array.
#include <iostream>
using namespace std;

int main()
{
  int arr[5]={1,2,3,4,5};
  int sum=1;

  for(int i=0;i<5;i++)
    {
      sum*=arr[i];
    }
    cout << sum << " is a product of all element"<< endl;

return 0;
}