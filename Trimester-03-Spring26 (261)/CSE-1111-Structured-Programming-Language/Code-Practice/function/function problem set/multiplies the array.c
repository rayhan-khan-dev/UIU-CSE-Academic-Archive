#include <stdio.h>

void multiply_by_two(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {

        arr[i] = arr[i] * 2;
    }
}

int main()
{

    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int num_arr[n];
    printf("Enter %d of integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num_arr[i]);
    }

    printf("\nOriginal array elements processed\n");

    multiply_by_two(num_arr, n);

    printf("Array after multiplying by 2: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", num_arr[i]);
    }
    return 0;
}