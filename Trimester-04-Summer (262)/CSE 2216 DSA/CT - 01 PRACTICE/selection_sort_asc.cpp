#include <iostream>
#include <vector>

using namespace std;

void selection_sort_asc(vector<int> &arr)
{

    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {

        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {

            if (abs(arr[j]) < abs(arr[min_idx]))
            {

                min_idx = j;
            }

            swap(arr[i], arr[min_idx]);
        }
    }
}

int main()
{

    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    selection_sort_asc(arr);

    cout << "After Sorting :";
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}