#include <stdio.h>
int main()
{
  int arr1[]={1,2,3,4,5};
  int arr2[]={6,7,8,9,10};
  int arr[10];

  for(int i=0;i<5;i++)
    {
      arr[i]=arr1[i];
      arr[i+5]=arr2[i];
    }

  for(int i=0;i<10;i++)
    {
      printf("%d\n", arr[i]);
    }
  return 0;
}