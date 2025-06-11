#include <stdio.h>
 int main()
{
    int wnum;

    printf("Enter a week number=");
    scanf("%d", &wnum);

    if(wnum == 1)
    printf("Sunday");

    else if(wnum == 2)
    printf("Monday");

    else if(wnum == 3)
    printf("tuseday");

    else if(wnum == 4)
    printf("wednesday");

    else if(wnum == 5)
    printf("Thusday");

    else if(wnum == 6)
    printf("Friday");

    else if(wnum == 7)
    printf("Seturday");

    else
    printf("Not valid number");

    return 0;
}