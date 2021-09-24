#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
        int data ;
        Node *next;
};
Node *ll(int n){
    Node *head = new Node();
    Node *y = head;
    int var;
    for(int i = 0; i < n; i++){
        cin>>var;
        y->data = var;
        y->next = (i < (n - 1)) ? new Node() : NULL;
        y = y->next;
    }
    return head;
}
void lastTofirst(Node **ref){
    Node *temp ;
    Node *curr = *ref;
    Node *perv = NULL;
    while(curr->next != NULL){
        perv = curr;
        curr = curr->next;
    }
    perv->next = NULL;
    curr->next = *ref;
    *ref = curr;
}
void print(Node *ref){
    Node *y = ref;
    while(y != NULL){
        cout<<y->data<<" ";
        y = y->next;
    }
}
int main(){
    int x;
    cin>>x;
    Node *head = ll(x);
    cout<<"BEFORE :";
    print(head);
    cout<<endl<<"AFTER :";
    lastTofirst(&head);
    print(head);
    return 0;
}