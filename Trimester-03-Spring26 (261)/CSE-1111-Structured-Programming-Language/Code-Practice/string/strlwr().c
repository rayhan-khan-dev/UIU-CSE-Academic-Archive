#include <stdio.h>
#include <string.h>

void StringLower(char string1[], char string2[])
{

    printf("Before Lower\n");

    printf("String1 is : %s\n", string1);
    printf("String2 is : %s \n", string2);

    strcat(string1, string2);

    strlwr(string1);

    printf("After Lower\n");

    printf("String1 is : %s \n", string1);
    printf("String2 is : %s \n", string2);
}

int main()
{

    char string1[100] = "RAYHAN ";
    char string2[100] = "Khan";

    StringLower(string1, string2);
}