#include<bits/stdc++.h>
using namespace std;
struct Node{
    Node* left;
    Node* right;
    int data, h;
    Node(int val){
        data = val;
        h = INT_MAX;
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

void bottomView(Node* root){
    queue<Node*> q;
    q.push(root);
    map<int, int> m;
    int he = 0;
    root->h = he;
    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        he = node->h;
        m[he] = node->data;
        if(node->left != NULL){
            node->left->h = he - 1;
            q.push(node->left);
        }
        if(node->right != NULL){
            node->right->h = he + 1;
            q.push(node->right);
        }
    }
    for(auto i : m){
        cout<<i.second<<" ";
    }
}

int main(){
    Node* root = buildTree();
    bottomView(root);
    return 0;
}
