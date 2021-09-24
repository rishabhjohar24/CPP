#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
        int data;
        Node *next;
};
Node *ll(int n){
    Node *head = new Node();
    Node *y = head;
    int var;
    for(int  i = 0; i < n; i++){
        cin>>var;
        y->data = var;
        y->next = (i < (n - 1)) ? new Node() : NULL;
        y= y->next;
    }
    return head;
}
void print(Node *ref){
    Node *y = ref;
    while(y != NULL){
        cout<<y->data<<" ";
        y = y->next;
    }
}
void removeDupes(Node *ref){
    Node *y = ref;
    Node *temp;
    if (y == NULL){
        return;
    }
    int i = 0;
    while(y->next != NULL){
        if(y->data == y->next->data){
            y->next = y->next->next;
        }else {
            y = y->next;
        }
    }
    print(ref);
}
int main(){
    int x;
    cin>>x;
    Node *head = ll(x);
    cout<<"Before : ";
    print(head);
    cout<<endl<<"After : ";
    removeDupes(head);
    return 0;
}   