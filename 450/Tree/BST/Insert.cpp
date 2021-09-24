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

void inorder(Node* root){
    if(!root){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

Node* insert(Node* root, int val){
    if(!root){
        root = new Node(val);
        return root;
    }
    if(val > root->data){
        root->right = insert(root->right, val);
    }
    else{
        root->left = insert(root->left, val);
    }
    return root;
}
int main(){
    Node* root = buildTree();
    int val = 1;
    while(val){
        cin>>val;
        if(val == -1){
            inorder(root);
            break;
        }
        insert(root, val);
        inorder(root);
        cout<<"\n";
    }
    return 0;
}