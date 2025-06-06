// 56789
//  4567
//   345
//    23
//     1

#include <stdio.h>
int main()
{
    int i=5,j=0;
    
    for(i=5; i>=1; i--)
    {
        for(j=4; j>=i; j--)
        {
            printf(" ");
        }

        for(j=i; j<i+i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }
    return 0;
}