#include <stdio.h>
int main()
{
    float year,mill;
    printf("Enter a Years=");
    scanf("%f", &year);

    mill=year/1000;

    printf("Millennume=%f", mill);

    return 0;
}