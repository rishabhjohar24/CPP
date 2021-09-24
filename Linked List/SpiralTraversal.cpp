#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* ll(int n){
    int val;
    Node* head = new Node();
    Node* temp = head;
    for(int i = 0; i < n; i++){
        cin>>val;
        temp->data = val;
        temp->next = (i < (n - 1)) ? new Node() : NULL;
        temp = temp->next;
    }
    return head;
}
Node* reverse(Node* head, int k){
    Node* next , *curr = head, *prev = NULL;
    int p = 0;
    while(k != p){
        p++;
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
int main(){
    int n, k = 0;
    cin>>n;
    Node* head = ll(n);
    Node* slow = head;
    Node* fast = head;
    while(fast && fast->next){
        // cout<<k;
        k++;
        cout<<"Slow->"<<slow->data<<" Fast->"<<fast->data<<"\n";
        slow = slow->next;
        fast = fast->next->next;
    }
    if(fast->next){
        k++;
    } 
    fast = reverse(head, k);
    cout<<slow->data;
    head = slow;
    Node *head1_curr = slow, *head2_curr = fast;
    Node *head1_next, *head2_next;
 
    // While therre are available positions in p
    while (head1_curr != NULL && head2_curr != NULL)
    {
        // Save next pointers
        head1_next = head1_curr->next;
        head2_next = head2_curr->next;
 
        // Make head2_curr as next of head1_curr
        head2_curr->next = head1_next; // Change next pointer of head2_curr
        head1_curr->next = head2_curr; // Change next pointer of head1_curr
 
        // Update current pointers for next iteration
        head1_curr = head1_next;
        head2_curr = head2_next;
    }
    while(head){
        cout<<head->data<<" ";
    }
    return 0;
}
void merge(Node *p, Node **q)
{
    Node *head1_curr = p, *head2_curr = *q;
    Node *head1_next, *head2_next;
 
    // While therre are available positions in p
    while (head1_curr != NULL && head2_curr != NULL)
    {
        // Save next pointers
        head1_next = head1_curr->next;
        head2_next = head2_curr->next;
 
        // Make head2_curr as next of head1_curr
        head2_curr->next = head1_next; // Change next pointer of head2_curr
        head1_curr->next = head2_curr; // Change next pointer of head1_curr
 
        // Update current pointers for next iteration
        head1_curr = head1_next;
        head2_curr = head2_next;
    }
 
    *q = head2_curr; // Update head pointer of second list
}