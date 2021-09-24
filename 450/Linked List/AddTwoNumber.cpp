#include<iostream>
#include<stack>
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
Node* add(Node* head1, Node* head2, int n, int m){
    Node* temp = NULL;
    stack <int> s1, s2;
    while(head1 != NULL){
        s1.push(head1->data);
        head1 = head1->next;
    }
    while(head2 != NULL){
        s2.push(head2->data);
        head2 = head2->next;
    }
    int carry = 0, val = 0;
    while(!s1.empty() || !s2.empty()){
        int a = 0, b = 0;
        if(!s1.empty()){
            a = s1.top();
            s1.pop();
        }
        if(!s2.empty()){
            b = s2.top();
            s2.pop();
        }
        Node* head = new Node();
        val = a + b + carry;
        carry = val / 10;
        head->data = val % 10;
        if(temp == NULL){
            temp = head;
        }
        else{
            head->next = temp;
            temp = head;
        }
    }
    if(carry){
        Node* head = new Node();
        head->data = carry;
        head->next = temp;
        temp = head;
    }
    return temp;
}
// void add(Node* head1, Node* head2, int n, int m){
//     int arr1[n], arr2[m], i = 0, j = 0, sum = 0, carry = 0;
//     while(head1 != NULL){
//         arr1[i] = head1->data;
//         head1= head1->next; 
//         i++;
//     }
//     while(head2 != NULL){
//         arr2[j] = head2->data;
//         head2= head2->next; 
//         j++;
//     }
//     i = n - 1;
//     j = m - 1;
//     while(i >= 0 && j >= 0){
//         sum = arr1[i] + arr2[j] + carry;
//         if(sum > 9){
//             if(n >= m){
//                 sum = sum % 10;
//                 arr1[i] = sum;
//                 carry = 1;
//             }
//             else{
//                 sum = sum % 10;
//                 arr2[j] = sum;
//                 carry = 1;
//             }
//         }
//         else{
//             if(n >= m){
//                 arr1[i] = sum;
//                 carry = 0;
//             }
//             else{
//                 arr2[j] = sum;
//                 carry = 0;
//             }
//         }
//         i--;
//         j--;
//     }
//     if(i == 0 && j == 0 && carry == 1){
//         arr1[i] += 10;
//     }
//     if(j < 0 && carry == 1 && i >= 0){
//         while(i >= 0){
//             if(i > 0){
//                 sum = arr1[i] + carry;
//                 if(sum > 9){
//                     carry = 1;
//                     arr1[i] = sum % 10;
//                 }
//                 else{
//                     carry = 0;
//                     arr1[i] = sum;
//                 }
//             }
//             else{
//                 arr1[i] += carry;
//             }
//             i--;
//         }
//     }
//     if(i < 0 && carry == 1 && j >= 0){
//         while(j >= 0){
//             if(j > 0){
//                 sum = arr2[j] + carry;
//                 if(sum > 9){
//                     carry = 1;
//                     arr2[j] = sum % 10;
//                 }
//                 else{
//                     carry = 0;
//                     arr2[j] = sum;
//                 }
//             }
//             else{
//                 arr2[j] += carry;
//             }
//             j--;
//         }
//     }
//     if(n >= m){
//         for(i = 0; i < n; i++){
//             cout<<arr1[i];
//         }
//     }
//     else{
//         for(j = 0; j < m; j++){
//             cout<<arr2[j];
//         }
//     }
// }
int main(){
    int n, m;
    cin>>n>>m;
    Node* head1 = make_ll(n);
    Node* head2 = make_ll(m);
    cout<<"List 1: ";
    print_ll(head1);
    cout<<"List 2: ";
    print_ll(head2);
    cout<<"Addition of Lists: ";
    print_ll(add(head1, head2, n, m));
    return 0;
}