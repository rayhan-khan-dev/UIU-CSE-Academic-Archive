#include <stdio.h>
#include <string.h>

int lengthCount(char string[])
{

    int length = strlen(string);
    return length;
}

int main()
{

    char name[1000] = "rayhan";
    int size = lengthCount(name);

    printf("The length of the string is: %d", size);
}