#include <stdio.h>
int main()
{
    int hour,day;

    printf("Enter a Hours=");
    scanf("%d",&hour);

    day=hour/24;

    printf("Days=%d", day);
    return 0;
}