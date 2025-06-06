#include <stdio.h>
int main()
{
    float year,week;
    printf("Enter a Years=");
    scanf("%f", &year);

    week=year*52;

    printf("Weeks=%f", week);

    return 0;
}