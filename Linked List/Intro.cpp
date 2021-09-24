#include<bits/stdc++.h>
using namespace std;

class Node {
    public : 
        int data;
        Node* next;
};

Node* make_ll(int n){
    Node *head = new Node();
    Node *curr = head;
    int var;
    for(int i = 0; i < n; i++){
        cin>>var;
        curr->data = var;
        curr->next = (i < (n - 1)) ? new Node() : NULL;
        curr = curr->next;
    }
    return head;
}
void print(Node *ref){
    Node *y = ref;
    while(y != NULL){
        cout<<y->data<<" ";
        y = y->next;
    }
}
int main(){
    int x;
    cin>>x;
    Node *head = make_ll(x);
    print(head);
    mid(head);
    return 0;
}











































// // Program to create a simple linked 
// // list with 3 nodes 

// int main(){
//     Node* head = NULL;
//     Node* second = NULL;
//     Node* third = NULL;

//     // allocate 3 nodes in the heap 
    
//     head = new Node();
//     second = new Node();
//     third = new Node();

//     /* Three blocks have been allocated dynamically.  
//     We have pointers to these three blocks as head,  
//     second and third      
//     head         second         third  
//         |             |             |  
//         |             |             |  
//     +---+-----+     +----+----+     +----+----+  
//     | # | # |     | # | # |     | # | # |  
//     +---+-----+     +----+----+     +----+----+  
      
// # represents any random value.  
// Data is random because we haven’t assigned  
// anything yet */

//     head->data = 1; // assign data in first node 
//     head->next = second; // Link first node with 

//      // the second node 
  
//     /* data has been assigned to the data part of first  
//     block (block pointed by the head). And next  
//     pointer of the first block points to second.  
//     So they both are linked.  
  
//     head         second         third  
//         |             |             |  
//         |             |             |  
//     +---+---+     +----+----+     +-----+----+  
//     | 1 | o----->| # | # |     | # | # |  
//     +---+---+     +----+----+     +-----+----+      
// */
  
//     // assign data to second node 

//     second->data = 2;
//     second->next = third; // Link second node with the third node 

//      /* data has been assigned to the data part of the second  
//     block (block pointed by second). And next  
//     pointer of the second block points to the third  
//     block. So all three blocks are linked.  
      
//     head         second         third  
//         |             |             |  
//         |             |             |  
//     +---+---+     +---+---+     +----+----+  
//     | 1 | o----->| 2 | o-----> | # | # |  
//     +---+---+     +---+---+     +----+----+     */

//     third->data = 3;    // assign data to third node 
//     third->next = NULL;

//      /* data has been assigned to the data part of the third  
//     block (block pointed by third). And next pointer  
//     of the third block is made NULL to indicate  
//     that the linked list is terminated here.  
  
//     We have the linked list ready.  
  
//         head      
//             |  
//             |  
//         +---+---+     +---+---+     +----+------+  
//         | 1 | o----->| 2 | o-----> | 3 | NULL |  
//         +---+---+     +---+---+     +----+------+      
      
      
//     Note that only the head is sufficient to represent  
//     the whole list. We can traverse the complete  
//     list by following the next pointers. */
//     return 0;
// }