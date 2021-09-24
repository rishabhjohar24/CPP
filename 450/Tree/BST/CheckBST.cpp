#include<bits/stdc++.h>
using namespace std;
struct Node{
    Node *right, *left;
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

bool checkBST(Node* root){
    if(!root){
        return true;
    }
    if(root->left && root->left->data > root->data){
        return false;
    } 
    if(root->right && root->right->data < root->data){
        return false;
    }
    if(!checkBST(root->left) || !checkBST(root->right)){
        return false;
    }
    return true;
}
int main(){
    Node* root = buildTree();
    (checkBST(root)) ? cout<<"YES" : cout<<"NO";
    return 0;
}