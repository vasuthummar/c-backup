#include <stdio.h>
int main()
{
    char alp;
    printf("enter a alphabet=");
    scanf("%c", &alp);

    if(alp >= 'A' && alp <='Z')
        {
            alp=alp+32;
            printf("alphabet=%c", alp);
        }
    else
        {
            alp=alp-32;
            printf("alphabet=%c", alp);
        }
    return 0;
}