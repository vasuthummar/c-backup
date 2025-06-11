#include<stdio.h>
int main()
{
    int n,val,i=0,arr[]={1,2,3,4,5};

    printf("enter a position where you want to insert: ");
    scanf("%d",&n);

    printf("enter elements: ");
    scanf("%d",&val);

    arr[n-1]=val;

    for(i=0; i<5; i++)
      {
       printf("%d ",arr[i]);
      }
      return 0;
}
