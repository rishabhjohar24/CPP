#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
        int data;
        Node *next;
};
void push(Node **ref, int x){
    Node *y = new Node();
    y->data = x;
    y->next = *ref;
    *ref = y;
};
int count(Node *ref){
    Node *y = ref;
    int count = 0;
    while(y != NULL){
        count++;
        y = y->next;
    }
    return count;
}
// void print(Node *ref){
//     while(ref != NULL){
//         cout<<ref->data<<" ";
//         ref = ref->next;
//     }
// }
int main(){
    Node *head = NULL;
    int n, var;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>var;
        push(&head, var);
    }
    // print(head);
    cout<<count(head);
    return 0;
}