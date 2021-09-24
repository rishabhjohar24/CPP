#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
        int data;
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
void swap(Node *ref){
    Node *temp = ref;
    while(temp != NULL && temp->next != NULL){
        swap(temp->data, temp->next->data);
        temp = temp->next->next;
    }
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
    cout<<"BEFORE SWAP : ";
    print(head);
    cout<<endl;
    swap(head);
    cout<<"AFTER SWAP : ";
    print(head);
    return 0;
}