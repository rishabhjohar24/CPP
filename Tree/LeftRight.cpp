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
int leftSum(Node* root){
    return (!root) ? 0 : root->data + leftSum(root->left);
}
int rightSum(Node* root){
    return (!root) ? 0 : root->data + rightSum(root->right);
}
void traverse(Node* root){
    if(!root){
        return;
    }
    if(root->left || root->right){
        if(leftSum(root->left) == rightSum(root->right)){
            cout<<root->data<<" ";
        }
    }
    traverse(root->left);
    traverse(root->right);
    return;
}
int main(){
    Node* root = buildTree();
    traverse(root);
    return 0;
}