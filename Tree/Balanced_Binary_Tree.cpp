#include<iostream>
using namespace std;
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

bool isBalanced(Node* root, int* height){
    if(root == NULL){
        return true;
    }
    int lh = 0, rh = 0;
    if(!isBalanced(root->left, &lh)){
        return false;
    }
    if(!isBalanced(root->right, &rh)){
        return false;
    }
    *height = max(lh, rh) + 1;
    if(abs(lh - rh) <= 1){
        return true;
    }
    return false;
}

int main(){
    int height = 0;
    Node* root = buildTree();
    if(isBalanced(root, &height)){
        cout<<"Balanced";
    }
    else{
        cout<<"Unbalanced";
    }
    return 0;
}

//high complexity due to calculation of heights of each node
// int height(Node* root){
//     if(root == NULL){
//         return 0;
//     }
//     int l = height(root->left);
//     int r = height(root->right);
//     return max(l, r) + 1;
// }
// bool isBalanced(Node* root){
//     if(root == NULL){
//         return true;
//     }
//     if(!isBalanced(root->left)){
//         return false;
//     }
//     if(!isBalanced(root->right)){
//         return false;
//     }
//     int lh = height(root->left);
//     int rh = height(root->right);
//     if(abs(lh - rh) <= 1){
//         return true;
//     }
//     return false;
// }