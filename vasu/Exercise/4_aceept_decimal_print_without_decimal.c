#include <stdio.h>
int main()
{
     float a;

     printf("Enter a value=");
     scanf("%f", &a);

     int b=(int)a;

     printf("value  without decimal is %d", b);

     return 0;

}