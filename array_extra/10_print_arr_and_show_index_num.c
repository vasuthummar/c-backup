//Input 6 numbers into an array and print each element with its index position.
#include <stdio.h>
int main()
{
    int arr[6];
    

    for(int i=0; i<6; i++)
    {
        printf("Enter a value %d=", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<6; i++)
    {
        printf("%d its index positin is %d\n", arr[i], i);
    }

    return 0;
}