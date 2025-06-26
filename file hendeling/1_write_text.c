#include <stdio.h>
int main()
{
    FILE *fp = fopen("data.txt", "w");

    if(fp == NULL)
    {
        perror("Failed to open file");
        return 1;
    }

    fprintf(fp, "Hello, File Handling!\n");
    fprintf(fp, "Writing with fprintf.\n");

    fclose(fp);

    return 0;
}