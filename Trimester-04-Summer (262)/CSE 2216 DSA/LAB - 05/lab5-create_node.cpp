#include<iostream>
using namespace std;

struct node {
 
    int data;
    node* next;

};


int main (){


node* first = new node();

first -> data = 10;
first -> next =nullptr;

cout << first->data << endl;

return 0;

}