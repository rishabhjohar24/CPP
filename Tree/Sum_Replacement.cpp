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
void replace(Node* root){
    if(root == NULL){
        return;
    }
    replace(root->left);
    replace(root->right);
    if(root->left != NULL){
        root->data += root->left->data;
    }
    if(root->right != NULL){
        root->data += root->right->data;
    }
}
void traversal(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    traversal(root->left);
    traversal(root->right);
}
int main(){
    Node* root = buildTree();
    traversal(root);
    cout<<"\n";
    replace(root);
    traversal(root);
    return 0;
}
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1