#include<bits/stdc++.h>
using namespace std;
struct Node{
    Node *left, *right;
    int data;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
Node* buildTree(){
    int val;
    cin>>val;
    if(val == -1){
        return NULL;
    }    
    Node* root = new Node(val);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

Node* find(Node* root, int key){
    if(!root){
        return NULL;
    }
    if(root->data == key){
        return root;
    }
    if(root->data > key){
        return find(root->left, key);
    }
    return find(root->right, key);
}
int main(){
    Node* root = buildTree();
    int key;
    cin>>key;
    root = find(root, key);
    (root) ? cout<<root->data : cout<<-1;
    return 0;
}