//Read 10 characters from the user and store them in a character array, then print the array
#include <stdio.h>
int main()
{
    char arr[10];

    printf("Enter a 10 character= ");
    for(int i=0; i<10; i++)
    {
        scanf("%c ", &arr[i]);
    }

    for(int i=0; i<10; i++)
    {
        printf("%c ", arr[i]);
    }

    return 0;
}  
