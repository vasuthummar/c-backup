#include  <stdio.h>
int main()
{
    int a;
     
    printf("Enter a value=");
    scanf("%d", &a);
  
    int last_digit=a % 10;

    printf("Last digit of %d is %d",  a, last_digit);

    return 0;
}