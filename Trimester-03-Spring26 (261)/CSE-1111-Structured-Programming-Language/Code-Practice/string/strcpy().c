#include <stdio.h>
#include <string.h>

void copyString(char string1[], char string2[])
{

    printf("before copy string1 is %s\n ", string1);
    printf("before copy string2 is %s\n ", string2);

    strcpy(string1, string2);

    printf("after copy string1 is %s\n ", string1);
    printf("after copy string2 is %s\n ", string2);
}

int main()
{

    char string1[100] = "Rayhan";
    char string2[100] = "khan";

    copyString(string1, string2);
}