#include <stdio.h>
int main()
{
    int i,arr[10],n,sum=0,average;
    
    printf("Enter a number of elements under 10 : ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("Enter number %d=", i+1);
        scanf("%d", &arr[i]);

        sum += arr[i];
    }

    average = sum / n;
    printf("Average = %d", average);

    return 0;
}