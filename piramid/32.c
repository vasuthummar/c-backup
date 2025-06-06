//     1
//    23
//   345
//  4567
// 56789

#include <stdio.h>
int main()
{
    int i=1,j=0;

    for(i=1; i<=5; i++)
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