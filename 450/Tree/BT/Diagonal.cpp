#include<bits/stdc++.h>
using namespace std;
struct Node{
    Node *left, *right;
    int data;
    Node(int val){
        data = val;
        left = right = NULL;
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

void Diagonal(Node* root, map<int, vector<int>>& a, int d){
    if(!root){
        return;
    } 
    a[d].push_back(root->data);
    Diagonal(root->right, a, d);
    Diagonal(root->left, a, d + 1);
}
int main(){
    Node* root = buildTree();
    map<int, vector<int>> a;
    Diagonal(root, a, 0);
    for(auto i : a){
        vector<int> k = i.second;
        for(auto j : k){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}