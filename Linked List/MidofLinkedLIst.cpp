#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
        int data;
        Node *next;
};
Node* make_ll(int n){
    Node *head =  new Node();
    Node *curr = head;
    int var;
    for(int  i = 0; i < n; i++){
        cin>>var;
        curr->data = var;
        curr->next = (i < (n - 1)) ? new Node() : NULL;
        curr = curr->next;
    }
    return head;
}
void print(Node *ref){
    Node *y = ref;
    while(y != NULL){
        cout<<y->data<<"->";
        y = y->next;
    }
}
void mid(Node *ref){
    Node *fast = ref;
    Node *slow = ref;
    if(ref != NULL){
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        cout<<slow->data;
    }    
}
int main (){
    int x;
    cin>>x;
    Node *head = make_ll(x);
    // print(head);  
    mid(head);
    return 0;
}