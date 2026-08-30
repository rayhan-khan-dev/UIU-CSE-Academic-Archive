#include<iostream>
using namespace std;

struct node {

    int data;
    node* next;

};

void traverselist(node* head){

    node* temp = head;

    while( temp != nullptr){

        cout << temp->data << " ";
        temp = temp -> next;

    }

cout << endl;

}

int main (){

    node* head = new node{10,nullptr};
    head -> next = new node{20, nullptr};
    head -> next -> next = new node{30,nullptr};

    traverselist(head);


//cleaning memory
node* current = head;

    while(current != nullptr){

        node* nextnode = current -> next;
        delete current ;
        current = nextnode;

    }

    return 0;

}