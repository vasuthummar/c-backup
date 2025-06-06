#include <stdio.h>
int main()
{
    float yearly,monthly;

    printf("Enter a yearly selery=");
    scanf("%f", &yearly);

    monthly=yearly/12;

    printf("Your monthly selery is=%f", monthly);

    return 0;
}