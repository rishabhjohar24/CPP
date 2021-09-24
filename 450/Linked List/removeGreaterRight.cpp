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

void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<"\n";
}
int lengthOfList(Node* head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}
void removeRightGreater(Node* head){
    Node* curr = head, *perv = head;
    int lmin = head->data, flag = 0;
    print(head);
    while(curr != NULL){
        flag = 0;
        if(curr->data <= lmin){
            lmin = curr->data;
        }
        else{
            // cout<<curr->data<<" ";
            perv->next = curr->next;
            flag = 1;
        }
        if(flag == 0){
            perv = curr;
        }
        curr = curr->next;
    }
    cout<<endl;
    print(head);
}
int main(){
    srand(time(0));
    int n = rand() % 21;
    Node* head = make_ll(n);
    removeRightGreater(head);
    return 0;
}