#include <stdio.h>
int main()
{
  int a[3][3]={ {1,2,3}, {4,5,6}, {7,8,9} };

  for(int i=0;i<3;i++)
  {
    int rowsum=0;
    for(int j=0;j<3;j++)
      rowsum+=a[i][j];
    printf("Sum of row %d = %d\n",i,rowsum);
  }
  return 0;
}