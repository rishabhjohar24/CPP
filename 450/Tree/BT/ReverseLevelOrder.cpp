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

void ReverseLEvelOrder(Node* root){
    queue<Node*> q;
    stack<Node*> s;
    q.push(root);
    while(!q.empty()){
        Node* node = q.front();
        s.push(node);
        q.pop();
        if(node != NULL){
            if(node->left != NULL){
                q.push(node->left);
            }
            if(node->right != NULL){
                q.push(node->right);
            }
        }
    }
    while(!s.empty()){
        root = s.top();
        cout<<root->data<<" ";
        s.pop();
    }
}
int main(){
    Node* root = buildTree();
    ReverseLEvelOrder(root);
    return 0;
}