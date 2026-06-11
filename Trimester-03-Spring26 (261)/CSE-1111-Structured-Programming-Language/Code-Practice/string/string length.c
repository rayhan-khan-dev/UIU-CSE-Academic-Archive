#include <stdio.h>

int StringLength(char string[])
{

    int count = 0;

    while (string[count] != '\0')
    {

        ++count;
    }

    return count;
}

int main(void)
{

    char word1[] = {'r', 'a', 'y', 'h', 'a', 'n', '\0'};
    char word2[] = {'r', 'a', 'y', 'h', 'a', '\0'};
    char word3[] = {'r', 'a', 'y', '\0'};

    printf("%i %i %i\n", StringLength(word1), StringLength(word2), StringLength(word3));

    return 0;
}