#include <stdio.h>
int main()
{
    float month,year,mill;
    printf("Enter a Months=");
    scanf("%f", &month);

    year=month/12;
    mill=year/1000;

    printf("Millennium=%f", mill);
    return 0;
}