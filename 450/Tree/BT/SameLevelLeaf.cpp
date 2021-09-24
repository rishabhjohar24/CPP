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

bool isLeaf(Node* root){
    if(!root->left && !root->right){
        return true;
    }
    return false;
}
void sameLevel(Node* root, set<int>& a, int d){
    if(!root){
        return;
    }
    if(isLeaf(root)){
        a.insert(d);
    }
    sameLevel(root->left, a, d + 1);
    sameLevel(root->right, a, d + 1);
}
int main(){
    set<int> k;
    Node* root = buildTree();
    sameLevel(root, k, 0);
    (k.size() == 1) ? cout<<1 : cout<<0;
    return 0;
}