#include  <stdio.h>
int main()
{
    int f,c;
    printf("Enter a fahrenheit=");
    scanf("%d", &f);

    c=(f-32)/1.8;

    printf("celsius=%d", c);

    return 0;
}