#include <stdio.h>
int main()
{

    // char arr[] = {'e', 'm', 'o', 'n', '\0'};
    // printf("%s\n", arr);

    // for (int i = 0; arr[i] != 0; i++)
    // {
    //     printf("%c ", arr[i]);
    // }

    char name[1000];
    printf("Enter Your name: ");
    scanf(" %[^\n]s", name);
    printf("Your name is %s\n", name);

    char depertment[1000];
    printf("Enter Your depertment name: ");
    scanf(" %[^\n]s", depertment);

    printf("Your name depertment name is %s", depertment);
}