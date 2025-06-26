#include <stdio.h>
int main()
{
    FILE *fp = fopen("chars.txt", "w+");
    
    if (fp == NULL)
    {
        return 1;
    }

    for(char c = 'A'; c <='E'; c++)
    {
        fputc(c, fp);
    }

    rewind(fp);

    int ch;
        while ((ch = fgetc(fp)) != EOF)
        {
            putchar(ch);
        }

    putchar("\n");

    fclose(fp);
    return 0;
    
}