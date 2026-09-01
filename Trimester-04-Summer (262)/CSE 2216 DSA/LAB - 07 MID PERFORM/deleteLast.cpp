#include <iostream>
using namespace std;

struct Node {
    char data;
    Node* next;
};

Node* head = NULL;

Node* createNode(char val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

void deleteLast() {
    if (head == NULL) {
        return;
    }
    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

int main() {
    head = createNode('A');
    head->next = createNode('B');
    head->next->next = createNode('C');
    
    deleteLast();
    
    return 0;
}
