#include <stdio.h>
int main()
{
    int mnum;
    printf("Enter a month number=");
    scanf("%d", &mnum);

    if(mnum == 2 )
    printf("Month day is 28/29");

    else if(mnum == 1 || mnum == 3 || mnum == 5 || mnum == 7 || mnum == 8 || mnum == 10 || mnum == 12)
    printf("Month day is 31");

    else if(mnum == 4 || mnum == 6 || mnum == 9 || mnum == 11)
    printf("Month day is 30");

    else
    printf("Not valid number");
   
    return 0;
}