#include <stdio.h>
int main()
{
  int n,i=0,arr[]={1,2,3,4,5};

  printf("whic elements you want to delete: ");
  scanf("%d",&n);

  for(i=n-1;i<5;i++)
    {
      arr[i]=arr[i+1];
    }

   for(i=0;i<4;i++)
     {
      printf("%d ",arr[i]);
     }
     return 0;
}
