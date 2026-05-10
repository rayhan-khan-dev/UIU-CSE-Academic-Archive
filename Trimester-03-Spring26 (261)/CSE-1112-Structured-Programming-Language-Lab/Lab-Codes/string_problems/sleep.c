#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
    char str[] = "I LOVE CSE";

    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c", str[i]);
        fflush(stdout);
        Sleep(500);
    }

    return 0;
}