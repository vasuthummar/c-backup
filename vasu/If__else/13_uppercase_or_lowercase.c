#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a charecter=");
    scanf("%s", &ch);

    if(ch>='A' && ch<='Z')
    printf("it is a uppercase");
    else
    printf("it is a lowercase");

    return 0;
}