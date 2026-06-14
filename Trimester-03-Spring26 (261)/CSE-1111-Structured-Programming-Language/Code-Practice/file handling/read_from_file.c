#include <stdio.h>

int main()
{

    FILE *fptr;

    fptr = fopen("file.txt", "r");

    char name[50];
    int id;
    char line[100];

    while (fgets(line, 100, fptr))
    {
        printf("%s", line);
    }

    fprintf(fptr, "Name:%s\nID:%d\n", name, id);

    fclose(fptr);

    return 0;
}