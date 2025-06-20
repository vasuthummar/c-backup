#include <stdio.h>
int main()
{
  int a = 10, b = 20, c = 30;
  int *ptr_arr[3];

  ptr_arr[0] = &a;
  ptr_arr[1] = &b;
  ptr_arr[2] = &c;

  printf("value through pointer array:\n");
  for (int i = 0; i < 3; i++)
    {
      printf("ptr_arr[%d] = %d\n", i, *ptr_arr[i]);
    }

    *ptr_arr[0] = 100;
    *ptr_arr[1] = 200;
    *ptr_arr[2] = 300;

    printf("\n After changes: \n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}