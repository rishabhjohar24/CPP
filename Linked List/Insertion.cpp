#include<bits/stdc++.h>
using namespace std;

class Node{
    public :
        int data;
        Node *next;
};

    //To print Linked List 

void print(Node* n){
    while (n != NULL){
        cout<< n->data <<" ";
        n = n->next;
    }
}
//Add Node before the first element
void push(Node** head_ref, int new_data){
    Node* new_node = NULL;
    new_node = new Node();

    new_node->data = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

//Add node after given node
void btw(Node* perv_node, int new_data){
    if(perv_node == NULL){
        cout<<"Previous node cn=annot be NULL";
        return ;
    }
    Node* new_node = NULL;
    new_node = new Node();
    new_node -> data = new_data;
    new_node -> next = (perv_node) -> next;
    (perv_node) -> next = new_node;
}

//Adding node after the last node
void last(Node** head_ref, int new_data){
    Node* new_node = new Node();
    new_node -> data = new_data;
    new_node -> next = NULL;
    Node* last = *head_ref ;
    if(*head_ref == NULL){
        *head_ref = new_node;
        return ;
    }
    while(last-> != NULL){
        last - last-> next;
    }
    last -> next = new_node;
    return ;
}

int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head -> data = 1;
    head -> next = second;

    second -> data = 2;
    second -> next = third;

    third -> data = 3;
    third -> next = NULL;

    cout<<"BEFORE ADDING NODE: ";
    print (head);

    push(&head , 17);
    cout<<endl<<"AFTER ADDING NODE: ";
    print (head);

    btw(head -> next  , 8);
    cout<<endl<<"AFTER ADDING NODE AT DESIRED POSITION: ";
    print (head);

    last(third , 900);
    cout<<endl<<"ADDING NODE AFTER LAST NODE : ";
    print (head);

    return 0;
}