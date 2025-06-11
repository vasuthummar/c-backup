#include <stdio.h>
int main()
{
    int min,hour,day;

    printf("Enter a Minutes=");
    scanf("%d", &min);

    hour=min/60;
    day=hour/24;

    printf("Days=%d", day);

    return 0;
}