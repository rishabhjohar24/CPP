#include<bits/stdc++.h>
using namespace std; 
class Node{
    public :
        int data;
        int flag;
        Node *next;
};
Node *make_ll(int n){
    Node *head = new Node();
    Node *curr = head;
    int var;
    for (int i = 0; i < n; i++){
        cin>>var;
        curr->data = var;
        curr->next = (i < (n - 1)) ? new Node() : NULL;
        curr = curr->next;
    }
    return head;
}
bool loop(Node *ref){
    Node *y = ref;
    while(y != NULL){
        if(y->flag == 1){
            return true;
        }
        y->flag = 1;
        y = y->next;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    Node *head = make_ll(n);
    // for(int i = 0; i < (rand() % n); i++){
    //     head = head->next;
    //     cout<<i;
    // }
    head->next =  head;
    if (loop(head)){
        cout<<"YES";
    }else {
        cout<<"NO";
    }
    return 0;
}