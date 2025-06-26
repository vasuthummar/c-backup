#include <stdio.h>
int main()
{
    FILE *fp;
    int num, sum = 0;

    fp = fopen("number.txt", "r");

    if(fp == NULL)
    {
        printf("Error");
        return 1;
    }

    printf("Numbers from file: ");

    while (fscanf(fp, "%d", &num) != EOF)
    {
        printf("%d ", num);
        sum = sum + num;
    }

    printf("\nSum of all numbers: %d\n", sum);

    fclose(fp);
    return 0;
}