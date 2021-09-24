#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
        int data;
        Node *next;
};
Node *ll(int n){
    Node *head = new Node();
    int var; 
    Node *y = head;
    for(int i = 0; i < n; i++){
        cin>>var;
        y->data = var;
        y->next = (i < (n - 1)) ? new Node() : NULL;
        y = y->next;
    }
    return head;
}
bool palindrome(Node *ref){
    Node *y = ref;
    stack <int> s;
    while(y != NULL){
        s.push(y->data);
        y = y->next;
    }
    while(ref != NULL){
        int i = s.top();
        s.pop();
        if(i != ref->data){
            return false;
        }
        ref = ref->next;
    }
    return true;
}
int main(){
    int x;
    cin>>x;
    Node *head = ll(x);
    palindrome(head) ? cout<<"YES" : cout<<"NO";
    return 0;
}