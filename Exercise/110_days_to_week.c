#include <stdio.h>
int main()
{
    float day,week;
    printf("Enter a Days=");
    scanf("%f", &day);

    week=day/7;

    printf("Weeks=%f", week);

    return 0;
}