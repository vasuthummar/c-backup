//Search for a specific number in an array of 10 integers and print "Found" or "Not Found".
#include <stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int num;

    printf("Enter a num which is you are finding=");
    scanf("%d", &num);

    for(int i=0; i<5; i++)
    {
        if(num==arr[i])
            printf("found");

        else
            printf("Not found");
    }
    return 0;
}