#include<iostream>
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

Node* LCA(Node* root, int n1, int n2){
    if(!root){
        return NULL;
    }
    if(n1 == root->data || n2 == root->data){
        return root;
    }
    Node* left = LCA(root->left, n1, n2);
    Node* right = LCA(root->right, n1, n2);
    if(left && right){
        return root;
    }
    if(!left  && !right){
        return NULL;
    }
    return (left) ? left : right;
}

int main(){
    Node* root = buildTree();
    int n1, n2;
    cin>>n1>>n2;
    Node* lca = LCA(root, n1, n2);
    cout<<lca->data;
    return 0;
}