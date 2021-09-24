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

int height(Node* root){
    if(!root){
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh, rh) + 1;
}

int main(){
    Node* root = buildTree();
    cout<<height(root);
}