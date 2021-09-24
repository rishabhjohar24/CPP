#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
};
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next; 
    }
}
bool isPalindrome(Node* head, stack <int> rev){
    while(!rev.empty()){
        if(rev.top() != head->data){
            return 0;
        }
        rev.pop();
        head = head->next;
    }
    return 1;
}
bool isPalindrome(Node* head_1, Node* head_2){
    while(head_1 != NULL || head_2 != NULL){
        if(head_1->data != head_2->data){
            return false;
        }
        head_1 = head_1->next;
        head_2 = head_2->next;
    }
    return true;
}
void reverse(Node** ref, int x){
    Node* new_node = new Node();
    new_node->data = x;
    new_node->next = *ref;
    *ref = new_node;
}
void make_ll(int n){
    stack <int> rev;
    Node* O_head = new Node();
    // Node* R_head = NULL;
    Node* y = O_head;
    int var;
    for(int i = 0; i < n; i++){
        cin>>var;
        rev.push(var);
        y->data = var;
        // reverse(&R_head, var);
        y->next = (i < n - 1) ? new Node() : NULL;
        y = y->next;
    }
    // if(isPalindrome(O_head, R_head) && isPalindrome(O_head, rev)){
    //     cout<<"Yes";
    // }
    if(isPalindrome(O_head, rev)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
int main(){
    int n;
    cin>>n;
    make_ll(n);
    return 0;
}