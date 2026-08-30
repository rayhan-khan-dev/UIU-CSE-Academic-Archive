#include <iostream>
#include <algorithm>

using namespace std;

// Selection Sort Function
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}

// Binary Search: First Occurrence
int findFirstOccurrence(int arr[], int n, int target)
{
    int low = 0, high = n - 1, ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            high = mid - 1; // Search left
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

// Binary Search: Last Occurrence
int findLastOccurrence(int arr[], int n, int target)
{
    int low = 0, high = n - 1, ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            low = mid + 1; // Search right
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

// Binary Search: Insert Position
int findInsertPosition(int arr[], int n, int target)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}

int main()
{
    int n, target;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter target value to search: ";
    cin >> target;

    // Step 1: Sort the array
    selectionSort(arr, n);
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Step 2: Binary Search Operations
    int first = findFirstOccurrence(arr, n, target);
    int last = findLastOccurrence(arr, n, target);

    if (first != -1)
    {
        cout << "Target found!" << endl;
        cout << "First Occurrence Index: " << first << endl;
        cout << "Last Occurrence Index: " << last << endl;
        cout << "Total Frequency: " << (last - first + 1) << endl;
    }
    else
    {
        cout << "Target not found in array." << endl;
        int insertIdx = findInsertPosition(arr, n, target);
        cout << "Correct Insertion Position: Index " << insertIdx << endl;
    }

    return 0;
}