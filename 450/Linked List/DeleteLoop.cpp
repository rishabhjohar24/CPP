#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
};
Node* MakeLL(int n){
    Node* head = new Node();
    Node* curr = head;
    int val;
    for(int i = 0; i < n; i++){
        curr->data = rand() % 21;;
        curr->next = (i < (n - 1)) ? new Node() : NULL;
        curr = curr->next;
    }
    return head;
}
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
void delete_loop(Node* slow, Node* head, Node* prev){
    if(slow == head){
        prev->next = NULL;
        return;
    }
    Node* fast = head;
    while(fast->next != slow->next){
        fast = fast->next;
        slow = slow->next;
    }
    slow->next == NULL;
    return;
}
int detect(Node* head){
    Node* fast = head;
    Node* slow = head;
    Node* prev;
    while(fast && fast->next){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            delete_loop(slow, head, prev);
            return 1;
        }
    }
    return 0;
}
int main(){
    srand(time(0));
    int n = rand() % 21;
    Node* head = MakeLL(n);
    head->next->next->next->next->next = head;
    cout<<detect(head)<<endl;
    print(head);
    return 0;
}