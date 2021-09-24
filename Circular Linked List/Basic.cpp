#include<iostream>
using  namespace std;
class Node{
    public:
        int data;
        Node* next;
};

Node* make_cll(int n){
    Node* head = new Node();
    Node* List = head;
    int val;
    for(int i = 0; i < n; i++){
        cin>>val;
        List->data = val;
        List->next = (i < (n - 1)) ? new Node() : head;
        List = List->next;
    }
    return head;
}

void print(Node* head){
    Node* temp = head;
    if(temp != NULL){
        do{
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        while(temp != head);
    }
}

int main(){
    int n;
    cin>>n;
    Node* head = make_cll(n);
    print(head);
    return 0;
}