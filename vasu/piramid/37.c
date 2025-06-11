// 555555555
//  4444444
//   33333
//    222
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

        for(j=1; j<i+i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
