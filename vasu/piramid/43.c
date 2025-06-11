//       5 
//      454
//     34543
//    2345432
//   123454321

#include <stdio.h>
int main()
{
    int i=5,j=0;

    for(i=5; i>=1; i--)
    {
        for(j=0; j<=i; j++)
        {
            printf(" ");
        }

        for(j=i; j<=5; j++)
        {
            printf("%d", j);
        }

        for(j=4; j>=i; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }
    return 0;
}