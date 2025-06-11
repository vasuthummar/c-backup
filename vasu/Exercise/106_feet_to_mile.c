#include <stdio.h>
int main()
{
    float feet,cm,m,km,mile;
    printf("Enter a Feets=");
    scanf("%f", &feet);

    cm=feet*30.48;
    m=cm/100;
    km=m/1000;
    mile=km/1.6;

    printf("Miles=%f", mile);

    return 0;
}