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
bool isSumTree(Node* root){
    if(!root || (!(root->left) && !(root->right))){
        return true;
    }
    isSumTree(root->left);
    isSumTree(root->right);
    if(root->data == (root->left->data + root->right->data)){
        root->data *= 2;
        return true;
    }
    return false;
}
int main(){
    Node* root = buildTree();
    cout<<isSumTree(root);
    return 0;
}