#include <stdio.h>
int main()
{
    int arr[4] = {1,2,3,4};
    int *ptr = arr;

    printf("original array: ");
    for(int i=0; i<4; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Using ptr++:\n");
    printf("*ptr = %d, ", *ptr);
    ptr++;
    printf("*ptr = %d, ", *ptr);
    ptr++;
    printf("*ptr = %d, ", *ptr);

    ptr = arr;
    printf("\nUsing ++ptr:\n");
    printf("*ptr = %d, ", *ptr);
    ++ptr;
    printf("*ptr = %d\n", *ptr);

    return 0;
}