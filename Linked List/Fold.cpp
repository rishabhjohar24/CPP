#include<bits/stdc++.h>
using namespace std;
struct Node{
    Node* next;
    int data;
};
Node* LL(int n){
    Node* head = new Node();
    Node* temp = head;
    int val;
    for(int i = 0; i < n; i++){
        cin>>val;
        head->data = val;
        head->next = (i < n - 1) ? new Node() : NULL;
        head = head->next;
    }
    return temp;
}
void mid(Node *ref){
    Node *fast = ref;
    Node *slow = ref;
    stack<int> s;
    if(ref != NULL){
        while(fast != NULL && fast->next != NULL){
            s.push(slow->data);
            fast = fast->next->next;
            slow = slow->next;
        }
        Node* temp = slow;
        if(!fast->next){
            temp = temp->next;
        }
        fast = temp;
        while(fast){
            fast->data += s.top();
            // cout<<fast->data;
            fast = fast->next;
            s.pop();
        }
    }    
    while(slow){
        cout<<slow->data<<" ";
        slow = slow->next;
    }
}
int main(){
    int n;
    cin>>n;
    Node *head = LL(n);
    mid(head);
    return 0;
}