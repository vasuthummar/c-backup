#include <stdio.h>
int main()
{
    FILE *source, *destination;
    char ch;

    source = fopen("sample.txt", "r");
    if(source == NULL)
    {
        printf("Error");
        return 1;
    }

    destination = fopen("copy.txt", "w");
    if(destination == NULL)
    {
        printf("Error");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    printf("file copid successfully to copy.txt\n");

    fclose(source);
    fclose(destination);

    return 0;
    
}