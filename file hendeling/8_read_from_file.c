#include <stdio.h>
int main()
{
    FILE *fp;
    char word[100];

    fp = fopen("sample.txt", "r");

    if(fp == NULL)
    {
        printf("Error");
        return 1;
    }

    printf("Contents of sample.txt:\n");

    while(fscanf(fp, "%s", word) != EOF)
    {
        printf("%s ", word);
    }

    printf("\n");

    fclose(fp);

    return 0;
}