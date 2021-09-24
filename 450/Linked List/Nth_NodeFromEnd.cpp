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
int lengthOfList(Node* head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<"\n";
}
void nthNodeFromEnd(Node* head, int x){
    int len = lengthOfList(head);
    print(head);
    int k = len - x;
     if(k < 0){
        cout<<-1;
    }
    else{
        while(k--){
            head = head->next;
        }
        cout<<head->data;
    }
}
int main(){
    srand(time(0));
    int n = rand() % 21;
    int x = rand() % n + 1;
     cout<<n<<" "<<x<<"\n";
    Node* head = make_ll(n);
    nthNodeFromEnd(head, x);
    return 0;
}