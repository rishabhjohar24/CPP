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

void topView(Node* root){
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    vector<int> l, r;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i = 0; i < n; i++){
            Node* node = q.front();
            q.pop();
            if(i == n - 1 && node->data != root->data){
                r.push_back(node->data);
            }
            if(i == 0 && node->data != root->data){
                l.push_back(node->data);
            }
            if(node->left != NULL){
                q.push(node->left);
            }
            if(node->right != NULL){
                q.push(node->right);
            }
        }
    }
    for(int i = l.size() - 1; i >= 0; i--){
        cout<<l[i]<<" ";
    }
    cout<<root->data<<" ";
    for(int i = 0; i < r.size(); i++){
        cout<<r[i]<<" ";
    }
}
int main(){
    Node* root = buildTree();
    topView(root);
    return 0;
}