#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
};
Node* make_ll(int n){
    Node* head = new Node();
    Node* y = head;
    srand(time(0));
    int x = rand() % 50;
    for(int i = 0; i < n; i++){
        y->data = rand() % x;
        y->next = (i < n - 1) ? new Node() : NULL;
        y = y->next;
    }
    return head;
}
void distinct_list(Node* head){
    Node* curr = head;
    Node* temp;
    if (curr == NULL)
    return;
    while(curr->next != NULL){
        if(curr->data == curr->next->data){
            temp = curr->next->next;
            free(curr->next);
            curr->next = temp;
        }
        else{
            curr = curr->next;
        }
    }
}
void print_ll(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    int n = rand() % 21;
    Node* head = make_ll(n);
    cout<<"Before : ";
    print_ll(head);
    distinct_list(head);
    cout<<"After : ";
    print_ll(head);
    return 0;
}