#include <stdio.h>
#include <string.h>

void StringCompare(char string1[], char string2[])
{

    int a = strcmp(string1, string2);

    if (a == 0)
    {

        printf("These string are same\n");
    }
    else
    {

        printf("These string are not same\n");
    }
}

int main()
{

    char string1[100] = "Rayhan";
    char string2[100] = "Rayhan";

    StringCompare(string1, string2);
}