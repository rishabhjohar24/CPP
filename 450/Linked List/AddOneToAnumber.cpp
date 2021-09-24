#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
Node* make_ll(int n){
    Node* head = new Node();
    Node* y = head;
    int val;
    for(int i = 0; i < n; i++){
        cin>>val;
        y->data = val;
        y->next = (i < (n - 1)) ? new Node() : NULL;
        y = y->next;
    }
    return head;
}
void print_ll(Node* head){
    while(head != NULL){
        cout<<head->data;
        head = head->next;
    }
    cout<<endl;
}
Node* add_1(Node* head){
    Node* y = head;
    Node* find_9 = NULL;
    while(y->next != NULL){
        if(y->data != 9){
            find_9 = y;
        }
        y = y->next;
    }
    if(y->data != 9){
        y->data++;
        return head;    
    }
    if(find_9 == NULL){
        find_9 = new Node();
        find_9->data = 0;
        find_9->next = head;
        head = find_9;
    }
    find_9->data++;
    find_9 = find_9->next;
    while(find_9 != NULL){
        find_9->data = 0;
        find_9 = find_9->next;
    }
    return head;
}
int main(){
    int n;
    cin>>n;
    Node* head = make_ll(n);
    cout<<"Num : ";
    print_ll(head);
    add_1(head);
    cout<<"Num + 1 : ";
    print_ll(head);
    return 0;
}