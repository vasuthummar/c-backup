#include <stdio.h>

int main()
{
    char buffer[100];
    FILE *fp = fopen("line.txt", "w+");

    if(fp == NULL)
       { return 1;}


    fputs("First line of text\n", fp);
    fputs("Second line here\n", fp);

    rewind(fp);

    while (fgets(buffer, sizeof(buffer), fp) != NULL)
    {
        printf("%s", buffer);
    }

    fclose(fp);

    return 0;
}