#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
    int data;
    Node *next;
};
void push(Node **Ref, int x){
    Node *new_node = new Node();
    new_node->data = x;
    new_node->next = *Ref;
    *Ref = new_node;
}
void print(Node* n){
    while (n != NULL){
        cout<< n->data <<" ";
        n = n->next;
    }
}
int main(){
    Node *head = NULL;
    int n,t;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>t;
        push(&head , t);
    }
    print(head);
    return 0;
}