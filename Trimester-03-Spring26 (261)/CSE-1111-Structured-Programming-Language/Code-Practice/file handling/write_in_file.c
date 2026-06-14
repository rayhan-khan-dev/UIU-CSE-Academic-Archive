#include <stdio.h>

int main()
{

    FILE *fptr;

    // fptr = fopen("file.txt", "w");
    fptr = fopen("file.txt", "a");

    char name[50] = "Arannya";
    int id = 13;

    fprintf(fptr, "Name:%s\nID:%d\n", name, id);

    fclose(fptr);

    return 0;
}