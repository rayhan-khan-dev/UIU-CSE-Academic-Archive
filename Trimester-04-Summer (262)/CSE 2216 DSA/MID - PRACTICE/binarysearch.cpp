/**
 * DSA-1 LAB MASTER CODE TEMPLATE
 * Topics Covered: Linked List, Sorting Variations, Binary Search Variations
 */

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

// ============================================================================
// SECTION 1: SINGLY LINKED LIST (Global Head & Standard Operations)
// ============================================================================

struct Node
{
    int data; // Character list হলে 'char data' করে নিবেন
    Node *next;
};

Node *head = NULL; // Global head pointer

// 1. Create Node Dynamically
Node *createNode(int val)
{
    Node *newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

// 2. Print Linked List
void printLL(Node *h = head)
{
    Node *temp = h;
    while (temp != NULL)
    {
        cout << temp->data << (temp->next ? " -> " : "");
        temp = temp->next;
    }
    cout << endl;
}

// 3. Count Total Nodes
int countNodes(Node *h = head)
{
    int count = 0;
    Node *temp = h;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

// 4. Middle Node (Slow & Fast Pointer)
void printMiddle(Node *h = head)
{
    if (h == NULL)
        return;
    Node *slow = h;
    Node *fast = h;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << "Middle: " << slow->data << endl;
}

// 5. Insert at Head
void insertHead(int val)
{
    Node *newNode = createNode(val);
    newNode->next = head;
    head = newNode;
}

// 6. Insert at End / Last
void insertLast(int val)
{
    Node *newNode = createNode(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

// 7. Insert After a Given Value
void insertAfterGivenValue(int targetVal, int newVal)
{
    Node *temp = head;
    while (temp != NULL && temp->data != targetVal)
    {
        temp = temp->next;
    }
    if (temp == NULL)
        return;
    Node *newNode = createNode(newVal);
    newNode->next = temp->next;
    temp->next = newNode;
}

// 8. Delete Head
void deleteHead()
{
    if (head == NULL)
        return;
    Node *temp = head;
    head = head->next;
    delete temp;
}

// 9. Delete Last Node
void deleteLast()
{
    if (head == NULL)
        return;
    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }
    Node *temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;
    delete temp->next;
    temp->next = NULL;
}

// 10. Delete First Occurrence of Given Value
void deleteGivenValue(int val)
{
    if (head == NULL)
        return;
    if (head->data == val)
    {
        deleteHead();
        return;
    }
    Node *temp = head;
    while (temp->next != NULL && temp->next->data != val)
    {
        temp = temp->next;
    }
    if (temp->next != NULL)
    {
        Node *toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
}

// 11. Delete ALL Even Values
void deleteAllEvenValues()
{
    while (head != NULL && head->data % 2 == 0)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    if (head == NULL)
        return;
    Node *curr = head;
    while (curr->next != NULL)
    {
        if (curr->next->data % 2 == 0)
        {
            Node *temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
        else
        {
            curr = curr->next;
        }
    }
}

// 12. Detect Cycle (Floyd's Algorithm)
bool detectCycle(Node *h = head)
{
    Node *slow = h, *fast = h;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return true;
    }
    return false;
}

// ============================================================================
// SECTION 2: SORTING & SHEET VARIATIONS
// ============================================================================

// 1. Bubble Sort (Ascending / Descending)
void bubbleSort(int arr[], int n, bool ascending = true)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (ascending ? (arr[j] > arr[j + 1]) : (arr[j] < arr[j + 1]))
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// 2. Selection Sort (Ascending / Descending)
void selectionSort(int arr[], int n, bool ascending = true)
{
    for (int i = 0; i < n - 1; i++)
    {
        int targetIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (ascending ? (arr[j] < arr[targetIdx]) : (arr[j] > arr[targetIdx]))
            {
                targetIdx = j;
            }
        }
        swap(arr[i], arr[targetIdx]);
    }
}

// 3. Sort by Absolute Value
void sortByAbsoluteValue(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (abs(arr[j]) > abs(arr[j + 1]))
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// 4. Sort Only First Half
void sortFirstHalf(int arr[], int n)
{
    int half = n / 2;
    for (int i = 0; i < half - 1; i++)
    {
        for (int j = 0; j < half - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

// 5. Sort Only Second Half
void sortSecondHalf(int arr[], int n)
{
    int start = n / 2;
    for (int i = start; i < n - 1; i++)
    {
        for (int j = start; j < n - 1 - (i - start); j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

// 6. Minimum Difference Between Two Elements
int minDifference(int arr[], int n)
{
    bubbleSort(arr, n, true);
    int minDiff = abs(arr[1] - arr[0]);
    for (int i = 1; i < n - 1; i++)
    {
        minDiff = min(minDiff, abs(arr[i + 1] - arr[i]));
    }
    return minDiff;
}

// 7. Sort by Frequency
struct FreqPair
{
    int val, count;
};
void sortByFrequency(int arr[], int n)
{
    vector<FreqPair> list;
    for (int i = 0; i < n; i++)
    {
        bool found = false;
        for (auto &item : list)
        {
            if (item.val == arr[i])
            {
                item.count++;
                found = true;
                break;
            }
        }
        if (!found)
            list.push_back({arr[i], 1});
    }
    for (size_t i = 0; i < list.size(); i++)
    {
        for (size_t j = i + 1; j < list.size(); j++)
        {
            if (list[i].count > list[j].count || (list[i].count == list[j].count && list[i].val > list[j].val))
            {
                swap(list[i], list[j]);
            }
        }
    }
    int idx = 0;
    for (auto &item : list)
    {
        for (int k = 0; k < item.count; k++)
            arr[idx++] = item.val;
    }
}

// ============================================================================
// SECTION 3: BINARY SEARCH VARIATIONS
// ============================================================================

// 1. Binary Search Ascending
int binarySearchAsc(int arr[], int n, int target)
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
    return -1;
}

// 2. Binary Search Descending
int binarySearchDesc(int arr[], int n, int target)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

// 3. First Occurrence
int findFirstOccurrence(int arr[], int n, int target)
{
    int low = 0, high = n - 1, ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return ans;
}

// 4. Last Occurrence
int findLastOccurrence(int arr[], int n, int target)
{
    int low = 0, high = n - 1, ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return ans;
}

// 5. Insert Position
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

// 6. Square Root (Binary Search on Answer)
int squareRoot(int n)
{
    int low = 0, high = n, ans = -1;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        if (mid * mid == n)
            return (int)mid;
        else if (mid * mid < n)
        {
            ans = (int)mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return ans;
}

int main()
{
    return 0;
}