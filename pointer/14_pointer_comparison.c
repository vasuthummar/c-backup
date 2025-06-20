#include <stdio.h>
int main()
{
  int arr[5]={1,2,3,4,5};
  int *ptr1 = &arr[1];
  int *ptr2 = &arr[3];
  int *ptr3 = &arr[1];

  printf("ptr1 pointer to: %d\n", *ptr1);
  printf("ptr2 pointer to: %d\n", *ptr2);
  printf("ptr3 pointer to: %d\n", *ptr3);

  if(ptr1 == ptr3)
    {
     printf("ptr1 and ptr3 point to same location\n");
    }

    if(ptr1 < ptr2)
      {
        printf("ptr1 points to earlier element than ptr2\n");
      }

      printf("Difference between ptr2 and ptr1: %ld\n", ptr2 - ptr1);

      return 0;
}
