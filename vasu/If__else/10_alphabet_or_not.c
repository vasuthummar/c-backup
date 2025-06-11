#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a charecter=");
    scanf("%s", &ch);

    if((ch>='A' &&ch>='Z' || ch>='a'&& ch<='z'))
    printf("it is a alphabet");
    else
    printf("it is a not alphabet");

    return 0;
}