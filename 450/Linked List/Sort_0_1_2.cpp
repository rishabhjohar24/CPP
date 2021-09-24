#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

Node* make_ll(int n){
    Node* head = new Node();
    Node* y = head;
    int var;
    srand(time(0));
    for(int i = 0; i < n; i++){
        var = rand() % 3;
        y->data = var;
        y->next = (i < n - 1) ? new Node(): NULL;
        y = y -> next;
    }
    return head;
}
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head -> next;
    }
    cout<<endl;
}
void sort(Node* head, int n){
    Node* y = head;
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for(y; y != NULL; y = y ->next){
        if(y->data == 0){
            cnt0++;
        }
        else if(y->data == 1){
            cnt1++;
        }
        else{
            cnt2++;
        }
    }
    y = head;
    while(cnt0 > 0){
        y->data = 0;
        y = y->next;
        cnt0--;
    }
    while(cnt1 > 0){
        y->data = 1;
        y = y->next;
        cnt1--;
    }
    while(cnt2 > 0){
        y->data = 2;
        y = y->next;
        cnt2--;
    }
    print(head);
}
int length(Node* head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}
int main(){
    int n, size;
    srand(time(0));
    n = rand() % 10;
    Node* head = make_ll(n);
    print(head);
    size = length(head);
    sort(head, size);
    return 0;
}