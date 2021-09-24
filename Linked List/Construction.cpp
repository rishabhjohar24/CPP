#include<iostream>
using namespace std;
struct Node{
    Node* next = NULL;
    int data;
};
Node* create(int val, Node* temp){
    Node* head = new Node();
    head->data = val;
    temp->next = head;
    temp = temp->next;
    return temp;
}
void print(Node* node){
    while(node){
        cout<<node->data<<" ";
        node = node->next;
    }
}
int main(){
    int n;
    cin>>n;
    Node* head , *temp;
    temp = head;
    int val;
    for(int i = 0; i < n; i++){
        cin>>val;
        temp = create(val, temp);
    }
    print(head);
    return 0;
}