#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

Node *createNode(int val)
{
    Node *newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

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
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to delete all even numbers
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

// Bubble sort for specific subarray range
void sortSubArray(int arr[], int start, int end, bool ascending)
{
    int len = end - start + 1;
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = start; j < end - i; j++)
        {
            if (ascending ? (arr[j] > arr[j + 1]) : (arr[j] < arr[j + 1]))
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        insertLast(val);
    }

    // Step 1: Filter even numbers
    deleteAllEvenValues();

    // Step 2: Convert remaining Linked List to Array
    vector<int> oddList;
    Node *temp = head;
    while (temp != NULL)
    {
        oddList.push_back(temp->data);
        temp = temp->next;
    }

    int m = oddList.size();
    if (m == 0)
    {
        cout << "No odd elements remaining!" << endl;
        return 0;
    }

    int arr[m];
    for (int i = 0; i < m; i++)
        arr[i] = oddList[i];

    // Step 3: Sort First Half (Descending) & Second Half (Ascending)
    int mid = m / 2;
    if (mid > 1)
    {
        sortSubArray(arr, 0, mid - 1, false); // First half Descending
    }
    if (m - mid > 1)
    {
        sortSubArray(arr, mid, m - 1, true); // Second half Ascending
    }

    cout << "Final Processed Array: ";
    for (int i = 0; i < m; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}