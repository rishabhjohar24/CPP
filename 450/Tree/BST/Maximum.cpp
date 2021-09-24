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

int main(){
    Node* root = buildTree();
    Node* max = NULL;
    while(root){
        max = root;
        root = root->right;
    }
    cout<<max->data;
    return 0;
}