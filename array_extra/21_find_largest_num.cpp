//Find the largest number in an array of 6 integers.
#include <iostream>
using namespace std;

int main()
{
  int arr[10]={1,2,3,4,5,6},max=0;

         max=arr[0];

   for(int i=0;i<6;i++)
     {
         if(arr[i]>max)
             max=arr[i];

     }
     cout<<"Max number is "<< max << endl;
     return 0;
}