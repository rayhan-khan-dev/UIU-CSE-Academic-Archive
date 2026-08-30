#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

// Insertion at BEGINNING
void insert_at_beginning(node* &head, int value) {
    node* newNode = new node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}
// Insert at END
void insert_at_end(node* &head, int value) {
    node* newNode = new node();
    newNode->data = value;
    newNode->next = nullptr;

    // If list is empty
    if (head == nullptr) {
        head = newNode;
        return;
    }

    node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Print linked list
void printlist(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    node* head = nullptr;

    insert_at_beginning(head, 30);
    insert_at_beginning(head, 20);
    insert_at_beginning(head, 10);

    cout << "After Inserting at Beginning: ";
    printlist(head);

    insert_at_end(head, 40);
    insert_at_end(head, 50);

    cout << "After Inserting at END: ";
    printlist(head);

    return 0;
}