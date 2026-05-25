#include <stdio.h>

void sort_arr(int arr[], int size)
{

    int temp;

    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{

    int n;

    printf("Enter The Number of elements: ");
    scanf("%d", &n);

    int num_arr[n];
    printf("Enter %d Number of integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num_arr[i]);
    }

    sort_arr(num_arr, n);

    printf("Sorted array in ascending orders:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", num_arr[i]);
    }
    return 0;
}