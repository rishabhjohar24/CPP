#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
        int data;
        Node *next;
};

void push(Node **ref, int y){
    Node *new_node = new Node();
    new_node->data = y;
    new_node->next = *ref;
    *ref = new_node;
}
bool find(Node *ref, int key){
    Node *new_node = ref;
    while(new_node->next != NULL){
        if(new_node->data == key){
            return true;
        }
        new_node = new_node->next;
    }
    return false;
}
int main(){
    Node *head = NULL;
    int n, var, x;
    cin>>n>>x;
    for (int i = 0; i < n; i++){
        cout<<head<<endl;
        cin>>var;
        push(&head, var);
        cout<<head<<" "<<&head<<" "<<head->next<<" "<<head->data<<endl;
    }
    find(head, x)? cout<<"YES" : cout<<"NO";
    return 0;
}