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

void zigzag(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    vector <int> a, b;
    int flag = 1;
    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        if(node != NULL){
            b.push_back(node->data);
            if(node->left != NULL){
                q.push(node->left);
            }
            if(node->right != NULL){
                q.push(node->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
            if(!flag){
                reverse(b.begin(), b.end());
                flag = 1;
            }
            else{
                flag = 0;
            }
            for(int i = 0; i < b.size(); i++){
                a.push_back(b[i]);
            }
            b.clear();
        }
    }
    for(int i = 0; i < b.size(); i++){
        a.push_back(b[i]);
    }
    for(int i = 0; i < a.size(); i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    Node* root = buildTree();
    zigzag(root);
    return 0;
}