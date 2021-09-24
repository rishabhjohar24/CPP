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

void inorder(Node* root){
    if(!root){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void flatten(Node* root){
    if(!root || (!root->left && !root->right)){
        return;
    }
    if(root->left){
        flatten(root->left);
        Node* temp = root->right;
        root->right = root->left;
        root->left = NULL;

        Node* t = root->right;
        while(t->right){
            t = t->right;
        }
        t->right = temp;
    }
    flatten(root->right);
}

int main(){
    Node* root = buildTree();
    flatten(root);
    inorder(root);
    return 0;
}