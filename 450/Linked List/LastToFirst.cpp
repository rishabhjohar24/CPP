#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
};
Node* make_ll(int n){
    Node* head = new Node();
    Node* y = head;
    int val;
    for(int i = 0; i < n; i++){
        cin>>val;
        y->data = val;
        y->next = (i < (n - 1)) ? new Node() : NULL;
        y = y->next;
    }
    return head;
}
void print_ll(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
void last_to_first(Node** head){
    Node* curr = *head;
    Node* second_last;
    while(curr->next != NULL){
        second_last = curr;
        curr = curr->next;
    }
    second_last->next = NULL;
    curr->next = *head;
    *head = curr;
}
int main(){
    int n;
    cin>>n;
    Node* head = make_ll(n);
    cout<<"Before : ";
    print_ll(head);
    last_to_first(&head);
    cout<<"After : ";
    print_ll(head);
    return 0;
}