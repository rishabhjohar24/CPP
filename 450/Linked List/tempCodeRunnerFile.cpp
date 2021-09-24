#include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };
// Node* make_ll(int n){
//     Node* head = new Node();
//     Node* y = head;
//     int val;
//     for(int i = 0; i < n; i++){
//         cin>>val;
//         y->data = val;
//         y->next = (i < (n - 1)) ? new Node() : NULL;
//         y = y->next;
//     }
//     return head;
// }
// void print_ll(Node* head){
//     while(head != NULL){
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     cout<<endl;
// }
// void middleOfList(Node* head){
//     Node* slow = head;
//     Node* fast = head;
//     while(fast != NULL && fast->next != NULL){
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     cout<<slow->data;
// }
// int main(){
//     int n;
//     cin>>n;
//     Node* head = make_ll(n);
//     cout<<"List : ";
//     print_ll(head);
//     cout<<"Middle Of List: ";
//     middleOfList(head);
//     return 0;
// }