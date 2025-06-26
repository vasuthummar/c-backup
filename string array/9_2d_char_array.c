#include <stdio.h>
int main()
{
    char colour[3][10] = {"Red", "Green", "Blue"};

    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s\n", i+1, colour[i]);
    }

    return 0;
    
}
