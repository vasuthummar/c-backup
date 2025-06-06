#include <stdio.h>
int main()
{
    float dec,mill;
    printf("Enter a Decands=");
    scanf("%f", &dec);

    mill=dec/100;

    printf("Millennium=%f", mill);
    return 0;
}