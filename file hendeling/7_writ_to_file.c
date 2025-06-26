#include <stdio.h>
int main()
{
    FILE *fp;

    fp = fopen("sample.txt", "w");

    if(fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Hello world!\n");
    fprintf(fp, "This is my first file.\n");
    fprintf(fp, "Learning C file hendeling.\n");

    fclose(fp);

    printf("Data wrtten to sample.txt successfully!\n");
    return 0;
}