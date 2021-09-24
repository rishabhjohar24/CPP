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
void Boundary(Node* root){
    if(!root){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i = 0; i < n; i++){
            Node* node = q.front();
            q.pop();
            if(i == 0 || i == n - 1 || (node->left == NULL && node->right == NULL)){
                cout<<node->data<<" ";
            }
            if(node->left != NULL){
                q.push(node->left);
            }
            if(node->right != NULL){
                q.push(node->right);
            }
        }
    }
}
int main(){
    Node* root = buildTree();
    Boundary(root);
    return 0;
}