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

void inorder(Node* root){
    if(!root){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

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

int toSum(Node* root){
    if(!root){
        return 0;
    }
    int old = root->data;
    root->data = toSum(root->left) + toSum(root->right);
    return root->data + old;
}

int main(){
    Node* root = buildTree();
    inorder(root);
    toSum(root);
    cout<<"\n";
    inorder(root);
    return 0;
}