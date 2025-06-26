#include <stdio.h>
#include <string.h>

int main()
{
    char a[100] = "Hello";
    char b[] = ", World";
    strcat(a, b);
    printf("%s\n", a);

    return 0;
}
