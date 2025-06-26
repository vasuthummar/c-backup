#include <stdio.h>
int main()
{
    FILE *fp = fopen("maybe.txt", "r");
    if(fp == NULL)
    {
        printf("File dose not exist or cannot opened\n");
        return 1;
    }

    printf("File opened successfully\n");
    fclose(fp);
    return 0;
}