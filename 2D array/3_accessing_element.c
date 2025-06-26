#include <stdio.h>
int main()
{
  int number[2][4]={
      {10,20,30,40},
      {20,30,40,50}};

  printf("Complete 2D array\n");
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("%d\t", number[i][j]);
    }
    printf("\n");
  }

  printf("\nAccessing Specific element\n");
  printf("Element at [0][0]: %d\n", number[0][0]);
  printf("Element at [0][3]: %d\n", number[0][3]);
  printf("Element at [1][2]: %d\n", number[1][2]);

  return 0;
}