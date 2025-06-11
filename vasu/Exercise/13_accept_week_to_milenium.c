#include <stdio.h>
int main()
{
    int week,year,mill;

    printf("Enter a number of week=");
    scanf("%d", &week);

    year=week/52;
    mill=year/1000;

    printf("millennium=%d", mill);

    return 0;
}