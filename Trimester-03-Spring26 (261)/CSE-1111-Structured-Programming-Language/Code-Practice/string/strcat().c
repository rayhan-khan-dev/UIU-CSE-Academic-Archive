#include <stdio.h>
#include <string.h>

void StringConcate(char string1[], char string2[])
{

    printf("Before Concate\n");

    printf("String1 is : %s\n", string1);
    printf("String2 is : %s \n", string2);

    strcat(string1, string2);

    printf("After Concate\n");

    printf("String1 is : %s \n", string1);
    printf("String2 is : %s \n", string2);
}

int main()
{

    char string1[100] = "Rayhan ";
    char string2[100] = "Khan";

    StringConcate(string1, string2);
}