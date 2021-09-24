#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        bool flag;
};
Node* make_ll(int n){
    Node* head = new Node();
    Node* curr = head;
    int val;
    for(int i = 0; i < n; i++){
        cin>>val;
        curr->data = val;
        curr->next = (i < ( n - 1)) ? new Node() : NULL;
        curr = curr->next;
    }
    return head;
}
bool Loop_present(Node* head){
    Node *y = head;
    while(y != NULL){
        if(y->flag == true){
            return true;
        }
        y->flag = true;
        y = y->next;
    }
    return false;
}
int main(){
    
    int n;
    cin>>n;
    Node* head = make_ll(n);
    head->next = head->next->next->next;
    if(Loop_present(head)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}