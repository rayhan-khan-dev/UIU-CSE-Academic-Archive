#include <stdio.h>
#include <math.h>

void TakeInput(float arr[], int size)
{
    int i;
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%f", &arr[i]);
    }
}

float CalcMean(float arr[], int size)
{
    float sum = 0.0;
    int i;
    for (i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size;
}

float Calc_Std_deviation(float arr[], int size)
{

    float mean = CalcMean(arr, size);
    float sum_of_squares = 0.0;
    int i;

    for (i = 0; i < size; i++)
    {
        sum_of_squares += pow(arr[i] - mean, 2);
    }

    return sqrt(sum_of_squares / size);
}

int main()
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float num_array[n];

    TakeInput(num_array, n);

    float std_dev = Calc_Std_deviation(num_array, n);

    printf("Standard Deviation: %.2f\n", std_dev);

    return 0;
}
