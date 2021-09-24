//level order traversal;
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
Node* create(){
    int var;
    cin>>var;
    if(var == -1){
        return NULL;
    }
    Node* root = new Node(var);
    root->left = create();
    root->right = create();
    return root;
}
void levelOrder(Node* root){
    if(root == NULL){
        return;
    }
    queue <Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        if(node != NULL){
            cout<<node->data<<" ";
            if(node->left != NULL){
                q.push(node->left);
            }
            if(node->right != NULL){
                q.push(node->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
}
int main(){
    Node* root = create();
    levelOrder(root);
    return 0;
}