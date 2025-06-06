#include <stdio.h>
int main()
{
    float week,day;
    printf("Enter a Week=");
    scanf("%f", &week);

    day=week*7;

    printf("Days=%f", day);
    return 0;
}