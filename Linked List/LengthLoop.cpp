#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
        int data,flag;
        Node *next;
};
Node *make_ll(int n){
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
void loop_len(Node* ref){
    Node *y = ref;
    while(y != NULL){
        if(y->flag == 1){
            break;
        }
        y->flag =  1;
        y = y->next;
    }
    int count = 0;
    while(y->flag == 1){
        count++;
        y->flag = 0;
        y = y->next;
    }
    cout<<count;
}
// void print(Node *ref){
//     Node *y = ref;
//     while(y != NULL){
//         cout<<y->data<<"->";
//         y = y->next;
//     }
// }
int main(){
    int x;
    cin>>x;
    Node *head = make_ll(x);
    // for(int i = 0; i < (rand() % x); i++){
    //     head = head->next;
    // }
    head->next->next->next->next->next = head->next;
    // print(head);
    loop_len(head);
    return 0;
}