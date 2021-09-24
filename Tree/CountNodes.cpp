#include<bits/stdc++.h>
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
    root->right= buildTree();
    return root;
}
int count(Node* root){
    if(root == NULL){
        return 0;
    }
    int k = 1;
    k += count(root->left);
    k += count(root->right);
    return k;
}
int main(){
    Node* root = buildTree();
    cout<<count(root);
    return 0;
}