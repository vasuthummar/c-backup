#include <stdio.h>
int main()
{
    int month,year,week;
    
    printf("Enter a number of month=");
    scanf("%d", &month);

    
     year=month/12;
     week=year*52;

    printf("Number of month is in week=%d", week);

    return 0;
}