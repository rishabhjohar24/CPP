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
    root->right = buildTree();
    return root;
}
void leftView(Node* root){
    if(root == NULL){
        return;
    }
    queue <Node*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i = 0; i < n; i++){
            root = q.front();
            q.pop();
            if(i == 0){
                cout<<root->data<<" ";
            }
            if(root->left != NULL){
                q.push(root->left);
            }
            if(root->right != NULL){
                q.push(root->right);
            }
        }
    }
}
int main(){
    Node* root = buildTree();
    leftView(root);
    return 0;
}