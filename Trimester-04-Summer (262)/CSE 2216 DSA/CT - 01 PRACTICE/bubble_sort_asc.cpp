#include <iostream>
#include <vector>
using namespace std;

void bubble_sort_asc(vector<int> &arr)
{

    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {

                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{

    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter" << size << " elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    bubble_sort_asc(arr);

    cout << "RESULT: ";
    for (int x : arr)
    {

        cout << x << " ";
    }

    cout << endl;

    return 0;
}