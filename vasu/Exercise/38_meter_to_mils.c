#include <stdio.h>
int main()
{
     float m,km,mil;

     printf("Enter a Meters=");
     scanf("%f", &m);

     km=m/1000;
     mil=km/1.6;

     printf("Miles=%f", mil);
     return 0;
}