#include <stdio.h>

int FindMin(int arr[], int size)
{

    int min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{

    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int num_arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num_arr[i]);
    }

    int minimum_value = FindMin(num_arr, n);
    printf("Minimum Value : %d\n", minimum_value);
}