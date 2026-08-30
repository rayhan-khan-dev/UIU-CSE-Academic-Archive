#include <iostream>
using namespace std;

struct node {

    int data;
    node *next;

};

int main() {

    node *first = new node();
    node *second = new node();

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = nullptr;

    cout << first->data << endl;
    cout << second->data << endl;

    return 0;
}