#include <stdio.h>
int main()
{
    int value = 100;
    int *ptr1;
    int **ptr2;
    int ***ptr3;

    ptr1 = &value;
    ptr2 = &ptr1;
    ptr3 = &ptr2;

    printf("value = %d\n", value);
    printf("*ptr1 = %d\n", *ptr1);
    printf("**ptr2 = %d\n", **ptr2);
    printf("***ptr3 = %d\n", ***ptr3);

    ***ptr3 = 500;
    printf("\nAfter change through triple pointer:\n");
    printf("value = %d\n", value);

    return 0;            
}