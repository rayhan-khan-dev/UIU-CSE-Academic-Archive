#include <stdio.h>

int findStringLength(char str[]);

int main()
{

    char text[200];
    int length;

    printf("Enter a string: ");
    scanf(" %[^\n]", text);

    length = findStringLength(text);
    printf("The size of string is:%d\n", length);

    return 0;
}

int findStringLength(char strr[])
{

    int len = 0;
    while (strr[len] != '\0')
    {
        len++;
    }
    return len;
}