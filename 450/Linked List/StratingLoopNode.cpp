#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        bool flag;
};
Node* make_ll(int n){
    Node* head = new Node();
    Node* curr = head;
    int val;
    for(int i = 0; i < n; i++){
        cin>>val;
        curr->data = val;
        curr->flag = false;
        curr->next = (i < (n - 1)) ? new Node() : NULL;
        curr = curr->next;
    }
    return head;
}
int starting_node(Node* head){
    while(head->flag != true){
        head->flag = true;
        head = head->next;
    }
    return head->data;
}
int main(){
    int n;
    cin>>n;
    Node* head = make_ll(n);
    head->next->next->next->next->next = head->next->next;
    cout<<starting_node(head);
    return 0;
}