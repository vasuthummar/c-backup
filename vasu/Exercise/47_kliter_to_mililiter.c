#include <stdio.h>
int main()
{
    float kl,l,mil;

    printf("Enter a Kiloliter=");
    scanf("%f", &kl);

    l=kl/1000;
    mil=l/1000;

    printf("Mililiter=%f", mil);

    return 0;

}