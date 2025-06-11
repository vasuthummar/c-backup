#include <stdio.h>
int  main()
{
    float km,liters,avg;

    printf("Enter a  total distance=");
    scanf("%f", &km);

    printf("Enter a  total petrol in liters=");
    scanf("%f", &liters);

    avg=km/liters;

    printf("Average=%f", avg);

    return 0;
}