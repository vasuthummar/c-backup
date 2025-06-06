#include <stdio.h>
int main()
{
    float min,sec;
    printf("Enter a Minutes=");
    scanf("%f", &min);

    sec=min*60;

    printf("Seconds=%f", sec);

    return 0;
}