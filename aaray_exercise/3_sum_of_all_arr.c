#include <stdio.h>
int main()
{
  int arr[]={1,2,3,4,5},sum=0,i=0;

  for(i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum);

  return 0;
}
