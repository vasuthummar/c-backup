#include <stdio.h>
int main()
{
    int arr[3]={5,10,15};
    int *ptr = arr;

    printf("Original arr: ");
    for(int i=0; i<3; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("*ptr++ = %d\n", *ptr++);
    printf("Current *ptr = %d\n", *ptr);

    ptr = arr;

    printf("(*ptr)++ = %d\n", *(ptr)++);
    printf("Current *ptr = %d\n", *ptr);
    printf("arr[0] is now: %d\n", arr[0]);

    return 0;
}