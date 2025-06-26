#include <stdio.h>
int main()
{
    FILE *fp = fopen("data.txt", "a");

    if(fp == NULL)
    {
        perror("Failed to open file");
        return 1;
    }

    fprintf(fp, "New log entry\n");

    fclose(fp);
    return 0;
}