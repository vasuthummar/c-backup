#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a charecter=");
    scanf("%c", &ch);

    
     if(ch>='0' && ch<='9')
    printf("it is a digit");

      else if(ch>='a' && ch<='z' || ch>='A' && ch<='z')
    printf("it is a alphabet"); 

    else
    printf("it is a special charecter");

    return 0;
}