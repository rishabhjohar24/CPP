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
void swap(Node **ref, int x, int y){
    if (x == y) {
        return;
    }     
    Node *pervx = NULL;
    Node *currx = *ref;
    while(currx && currx->data != x){
        pervx = currx;
        currx = currx->next;
    }
    Node *pervy = NULL;
    Node *curry = *ref;
    while(curry&& curry->data != y){
        pervy = curry;
        curry = curry->next;
    }
    if (currx == NULL || curry == NULL){  
        return;  
    }
    if(pervx == NULL){
        *ref = curry;
    } else {
        pervx->next = curry;
    }
    if(pervy == NULL){
        *ref = currx;
    }else {
        pervy->next = currx;
    }
    Node *temp = curry->next;
    curry->next = currx->next;
    currx->next = temp;
    // cout<<endl<<"pervx :"<<pervx->data<<endl;
    // cout<<"xurrx :"<<currx->data<<endl;
    // cout<<"pervy :"<<pervy->data<<endl;
    // cout<<"curry :"<<curry->data<<endl;
}
void print(Node *ref){
    Node *y = ref;
    while(y != NULL){
        cout<<y->data<<" ";
        y = y->next;
    }
}
int main(){
    int n, x, y;
    cin>>n>>x>>y;
    Node *head = ll(n);
    cout<<"Before SWAP : ";
    print(head);
    swap(&head, x, y);
    cout<<endl<<"After SWAP : ";
    print(head);
    return 0;
}