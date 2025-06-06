#include <stdio.h>
int main()
{
    int second,min;

    printf("Enter a second=");
    scanf("%d", &second);

    min=second/60;

    printf("Minutes=%d", min);

    return 0;
}