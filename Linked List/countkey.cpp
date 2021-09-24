#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
        int data;
        Node *next;
};
Node *make_ll(int n){
    Node *head = new Node();
    Node *curr =  head;
    int var;
    for(int i = 0; i < n; i++){
        cin>>var;
        curr->data = var;
        curr->next = (i < (n - 1)) ? new Node() : NULL;
        curr = curr->next;
    }
    return head;
}
void print_LL(Node *head){
    while(head != NULL){
        cout<<head->data;
        head = head->next;
    }
}
void count(Node *ref, int x){
    Node *y = ref;
    int count = 0;
    while(y != NULL){
        if(y->data == x){
            count++;
        }
        y = y->next;
    }
    cout<<count;
}
int main(){
    int key, n;
    cin>>n>>key;
    Node *head = make_ll(n);
    count(head, key);
    print_LL(head);
    return 0;
}