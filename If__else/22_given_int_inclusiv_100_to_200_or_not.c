#include <stdio.h>
int main()
{
    int val;
    printf("Enter a value=");
    scanf("%d", &val);

    if(val >= 100 && val <= 200)
        printf("%d is inclusev in 100 to 200", val);
    else
        printf("%d is not inclusev in 100 to 200", val);

    return 0;

}