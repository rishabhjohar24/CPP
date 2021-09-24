#include<bits/stdc++.h>
using namespace std;
struct Node{
    Node* left;
    Node* right;
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

void inorder(Node* root){
    if(!root){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
//Swaping Nodes to mirrorise tree
Node* mirrorTree(Node* root){
    if(!root){
        return NULL;
    }
    Node* swap = root->left;
    root->left = root->right;
    root->right = swap;
    if(root->left){
        mirrorTree(root->left);
    }
    if((root->right)){
        mirrorTree(root->right);
    }
    return root;
}
int main(){
    Node* root = buildTree();
    inorder(root);
    cout<<endl;
    mirrorTree(root);
    inorder(root);
    return 0;
}