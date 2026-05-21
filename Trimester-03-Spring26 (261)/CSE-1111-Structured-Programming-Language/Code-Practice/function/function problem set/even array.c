#include <stdio.h>

void PrintEvenNumbers(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf(" %d", arr[i]);
        }
        else
        {
            printf("You have not input even integers");
        }
        continue;
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter Number of eliments: ");
    scanf("%d", &n);

    int num_array[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &num_array[i]);
    }

    printf("Even numbers in the array: ");

    PrintEvenNumbers(num_array, n);
    return 0;
}