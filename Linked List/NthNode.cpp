#include<bits/stdc++.h>
using namespace std;
class Node{
    public :    
        int data;
        Node *next;
};
void print (Node *ref){
    Node *y = ref;
    while(y != NULL){
        cout<<y->data<<" ";
        y = y->next;
    }
}
void find(Node *ref, int x){
    Node *y = ref;
    int count = 0;
    while(count != x){
        y = y->next;
        count++;
    }
    cout<<y->data;
}
int main(){
    int n, x, val;
    cin>>n>>x;
    Node *head = new Node();
    Node *curr = head;
    for(int i = 0; i < n; i++){
        cin>>val;
        curr->data = val;
        curr->next = (i  < (n - 1)) ? new Node() : NULL;
        curr = curr->next;
    }
    print(head);
    find(head, x);
    return 0;
}