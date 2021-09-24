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

int diameter(Node* root, int* height){
    if(!root){
        *height = 0;
        return 0;
    }
    int lh= 0, rh = 0;
    int ld = diameter(root->left, &lh);
    int rd = diameter(root->right, &rh);
    int currd = lh + rh + 1;
    *height = max(lh, rh) + 1;
    return max(currd, max(ld, rd));
}

int main(){
    Node* root = buildTree();
    int height = 0;
    cout<<diameter(root, &height);
    return 0;
}