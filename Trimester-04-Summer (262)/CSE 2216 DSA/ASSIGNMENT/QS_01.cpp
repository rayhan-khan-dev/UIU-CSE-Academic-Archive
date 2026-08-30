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

int main()
{
    head = createNode('A');
    head->next = createNode('B');
    head->next->next = createNode('C');

    return 0;
}