#include <stdio.h>
int main()
{
    char *days[7] = {"Monday", "Tuseday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    printf("Day of week:\n");
    for(int i = 0; i < 7; i++)
    {
        printf("%d. %s\n", i+1, days[i]);
    }

    return 0;
}