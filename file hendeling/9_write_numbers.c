#include <stdio.h>
int main()
{
    FILE *fp;
    int i;

    fp = fopen("number.txt", "w");
    if(fp == NULL)
    {
        printf("Error");
        return 1;
    }

    for(i= 1; i<=10; i++)
    {
        fprintf(fp, "%d\n", i);
    }

    fclose(fp);
    printf("Number 1-10 writtrn to number.txt\n");
    
    return 0;
}