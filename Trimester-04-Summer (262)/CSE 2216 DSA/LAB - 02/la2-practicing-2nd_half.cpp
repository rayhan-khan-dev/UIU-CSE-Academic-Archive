#include <iostream>
using namespace std;

void bubbleSortSecondHalf(int arr[], int n)
{
    int start = n / 2;

    for(int i = start; i < n - 1; i++)
    {
        for(int j = start; j < n - (i - start) - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void display(int arr[], int n)
{
    cout << "Array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n = 6;
    int arr[] = {8, 3, 6, 1, 9, 2};

    bubbleSortSecondHalf(arr, n);

    display(arr, n);

    return 0;
}
