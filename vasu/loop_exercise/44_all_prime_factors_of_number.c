#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter any value: ");
    scanf("%d", &num);

    printf("Prime factors of %d are: ", num);

   
    for (i = 2; i <= num; i++)
    {
       
        while (num % i == 0) 
        {
            printf("%d ", i);
            num /= i;
        }
    }

    return 0;
}
