#include <stdio.h>
int main()
{
    float week,year,mill;
    printf("Enter a Weeks=");
    scanf("%f", &week);

    year=week/52;
    mill=year/1000;

    printf("Millennume=%f", mill);

    return 0;
}