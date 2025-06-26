#include <stdio.h>
int main()
{
    char str[50];
    int num;

    FILE *fp = fopen("data2.txt", "r");

    if(fp == NULL)
    {
        perror("Failed to open file");
        return 1;
    }

    fscanf(fp, "%d %49s", &num, str);
    printf("Number: %d, string: %s\n", num, str);

    fclose(fp);
    return 0;
}