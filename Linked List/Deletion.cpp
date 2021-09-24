#include<bits/stdc++.h>
using namespace std;

class Node{
    public :
        int data;
        Node* next;     
};

void push(Node** head_ref , int new_data){
    Node *new_node = new Node();
    new_node->next = *head_ref;
    new_node->data = new_data;
    *head_ref      = new_node;
}

void deleteN(Node** head_ref, int key){
    Node* temp = *head_ref;
    Node* perv = NULL;

    if(temp != NULL && temp->data == key){
        *head_ref = temp -> next;
        delete temp;
        return ;
    }
}