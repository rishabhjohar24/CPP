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
void levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* node = q.front();
        cout<<node->data<<" ";
        q.pop();
        if(node != NULL){
            if(node->left != NULL){
                q.push(node->left);
            }
            if(node->right != NULL){
                q.push(node->right);
            }
        }
        if(q.empty()){
            q.push(NULL);
        }
    }
}
int main(){
    Node* root = buildTree();
    levelOrder(root);
    return 0;
}