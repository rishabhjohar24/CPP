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
int sumAtK(Node* root, int k){
    list <Node*> q;
    int sum = 0;
    int p = 0;
    q.push_back(root);
    q.push_back(NULL);
    while(!q.empty()){
        Node* node = q.front();
        q.pop_front();
        if(node != NULL){
            if(k == p){
                sum += node->data;
            }
            if(node->left != NULL){
                q.push_back(node->left);
            }
            if(node->right != NULL){
                q.push_back(node->right);
            }
        }
        else if(!q.empty()){
            p++;
            q.push_back(NULL);
        }
    }
    return sum;
}
int main(){
    int k;
    cin>>k;
    Node* root = buildTree();
    cout<<sumAtK(root, k);
    return 0;
}