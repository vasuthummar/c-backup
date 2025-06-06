#include <stdio.h>
int main()
{
    int l,w;

    printf("Enter a Length=");
    scanf("%d", &l);

    printf("Enter a Width=");
    scanf("%d", &w);

    int area=l*w;
    
    printf("Area is %d", area);

    return 0;

}