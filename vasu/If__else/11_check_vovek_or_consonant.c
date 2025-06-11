#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a charecter=");
    scanf("%s", &ch);

    if((ch =='a'|| ch =='e' || ch =='i' || ch=='o' || ch=='u' || ch =='A'|| ch =='E' || ch =='I' || ch=='O' || ch=='U'))
    printf("it is a vovel"); 
    else
    printf("it is a consonant");

    return 0;
}