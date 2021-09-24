#include<iostream>
#include<bits/stdc++.h>
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
void intersection(Node* head1, Node* head2){
    cout<<"InterSection Of Linked List: ";
    unordered_set<int> match;
    while(head1 != NULL){
        match.insert(head1->data);
        head1 = head1->next;
    }
    while(head2 != NULL){
        if(match.find(head2->data) != match.end()){
            cout<<head2->data<<" ";
            break;
        }
        head2 = head2->next;
    }
}
int main(){
    int n, m;
    cin>>n>>m;
    Node* head1 = make_ll(n);
    Node* head2 = make_ll(m);
     cout<<"List 1: ";
    print_ll(head1);
    cout<<"List 2: ";
    print_ll(head2);
    intersection(head1, head2);
    return 0;
}