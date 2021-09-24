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
void rightView(Node* root){
    if(root == NULL){
        return;
    }
    list <Node*>q;
    q.push_back(root);
    while(!q.empty()){
        int n = q.size();
        for(int i = 0; i < n; i++){
            Node* curr = q.front();
            q.pop_front();
            if(i == n - 1){
                cout<<curr->data<<" ";
            }
            if(curr->left != NULL){
                q.push_back(curr->left);
            }
            if(curr->right != NULL){
                q.push_back(curr->right);
            }
        }
    }
}
int main(){
    Node* root = buildTree();
    rightView(root);
    return 0;
}