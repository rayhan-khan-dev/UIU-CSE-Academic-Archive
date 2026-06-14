
// QUESTION 01 SET A



#include <stdio.h>
#include <string.h>

int getSize(char str[])
{

    int i = 0;
    while (str[i] != '\0')
    {

        i++;
    }
    return i;
}

void removeAllDuplicate(char str[])
{

    int n = getSize(str);
    int index = 0;

    for (int i = 0; i < n; i++)
    {

        int found = 0;

        for (int j = 0; j < i; j++)
        {

            if (str[i] == str[j])
            {

                found = 1;
                break;
            }
        }

        if (found == 0)
        {

            str[index++] = str[i];
        }
    }

    str[index] = '\0';
}

void checkPalindrom(char *str)
{

    int len = getSize(str);
    int isPalindrom = 1;

    for (int i = 0; i < len / 2; i++)
    {

        if (str[i] != str[len - 1 - i])
        {

            isPalindrom = 0;
            break;
        }
    }

    if (isPalindrom == 1)
    {

        printf("palindrome\n");
    }
    else
    {
        printf("not palindrome\n");
    }
}

int main()
{

    char str[100];
    scanf("%s", str);

    removeAllDuplicate(str);

    printf("%s : ", str);

    checkPalindrom(str);

    return 0;
}