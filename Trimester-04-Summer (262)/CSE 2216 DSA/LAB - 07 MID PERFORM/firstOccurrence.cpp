#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int key)
{
    int left = 0, right = n - 1;
    int result = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
        {
            result = mid;
            right = mid - 1;
        }
        else if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return result;
}

int main()
{
    int arr[] = {2, 4, 4, 4, 6, 8, 10};
    int n = 7;
    int key = 4;

    int index = firstOccurrence(arr, n, key);
    cout << "First occurrence index: " << index << endl;

    return 0;
}