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
    for(int i = 0; i < n; i++){
        cin>>var;
        y->data = var;
        y->next = (i < (n - 1)) ? new Node() : NULL;
        y = y->next;
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
void removeDupe(Node *ref){
    Node *curr = ref;
    Node *perv = NULL;
    unordered_set <int> s;
    while(curr != NULL){
        if(s.find(curr->data) != s.end()){
            perv->next = curr->next;
            delete(curr);
        }else{
            s.insert(curr->data);
            perv = curr;
        }
        curr = perv->next;
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
    removeDupe(head);
    return 0;
}