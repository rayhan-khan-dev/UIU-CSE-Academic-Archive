#include <stdio.h>

int main()
{

    FILE *fptr;

    fptr = fopen("file.txt", "r");

    if (fptr != NULL)
    {

        printf("File Exist");
    }
    else
    {
        printf("File Does not Exist");
    }

    fclose(fptr);

    return 0;
}