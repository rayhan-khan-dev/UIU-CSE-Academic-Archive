#include <iostream>
using namespace std;

struct Node
{
    char data;
    Node *next;
};

Node *head = NULL;

Node *createNode(char val)
{
    Node *newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

void insertLast(char val)
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

void deleteLast()
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

int main()
{
    head = createNode('A');
    insertLast('B');
    deleteLast();

    return 0;
}