#include <stdio.h>
int main()
{
  int mark[4][3]={
    {85,90,78},
    {92,95,97},
    {80,85,86},
    {70,78,79}
  };

  printf("Student Mark Tabel:\n");
  printf("===========\n");
  printf("Student\tMaths\tscience\tEnglish\n");

  for (int i = 0; i < 4; i++)
  {
      printf("%d\t", i+1);
     for (int j = 0; j < 3; j++)
     {
         printf("%d\t", mark[i][j]);
     }
       printf("\n");
  }
    return 0;
}