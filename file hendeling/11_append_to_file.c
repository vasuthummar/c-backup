#include <stdio.h>
int main()
{
    FILE *fp;

    fp = fopen("sample.txt", "a");

    if(fp == NULL)
    {
        printf("Error\n");
        return 1;
    }

    fprintf(fp, "This line is appended.\n");
    fprintf(fp, "File handling is easy!\n");

    fclose(fp);
    printf("New data appended to asmple.txt\n");

    return 0;
}