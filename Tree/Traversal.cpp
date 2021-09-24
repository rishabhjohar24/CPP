#include<bits/stdc++.h>
using namespace std;
vector<int> pre, in, post;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
void print(vector<int> a){
    for(int i = 0; i < a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
//Preorder traversal
// [root, left, right]

void preOrder(Node* head){
    if(head == NULL){
        return;
    }
    pre.push_back(head->data);
    preOrder(head->left);
    preOrder(head->right);
}
//inorder traversal
//[left, root, right];

void inOrder(Node* head){
    if(head == NULL){
        return;
    }
    inOrder(head->left);
    in.push_back(head->data);
    inOrder(head->right);
}
//postordedr traversal
//[left, right, root]

void postOrder(Node* head){
    if(head == NULL){
        return;
    }
    postOrder(head->left);
    postOrder(head->right);
    post.push_back(head->data);
}
int main(){
    Node* head = new Node(1);
    head->left = new Node(2);
    head->right = new Node(3);
    head->left->left = new Node(4);
    head->left->right = new Node(5);
    head->right->left = new Node(6);
    head->right->right = new Node(7);
    preOrder(head);
    inOrder(head);
    postOrder(head);
    print(pre);
    print(in);
    print(post);
    return 0;
}