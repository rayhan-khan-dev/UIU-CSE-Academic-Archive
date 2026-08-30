#include <iostream>
#include <cmath>
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
        temp = temp->next;
    temp->next = newNode;
}

// Find Middle Node
int findMiddle()
{
    if (head == NULL)
        return -1;
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}

int main()
{
    int n;
    cout << "Enter total nodes: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        insertLast(arr[i]);
    }

    // Step 1: Middle Node
    cout << "Middle Node Value: " << findMiddle() << endl;

    // Step 2: Standard Ascending Sort for finding closest pair
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

    // Step 3: Find Minimum Difference
    int minDiff = abs(arr[1] - arr[0]);
    int elem1 = arr[0], elem2 = arr[1];

    for (int i = 1; i < n - 1; i++)
    {
        int diff = abs(arr[i + 1] - arr[i]);
        if (diff < minDiff)
        {
            minDiff = diff;
            elem1 = arr[i];
            elem2 = arr[i + 1];
        }
    }

    cout << "Minimum Difference: " << minDiff << endl;
    cout << "Pair with Minimum Difference: (" << elem1 << ", " << elem2 << ")" << endl;

    return 0;
}