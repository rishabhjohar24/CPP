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
    if(val == -5){
        return NULL;
    }
    Node* root = new Node(val);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

void print(vector<int> a, int j){
    for(int i = j; i < a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

void prinKPath(Node* root, vector<int>& a, int k){
    if(!root){
        return;
    }
    a.push_back(root->data);
    prinKPath(root->left, a, k);
    prinKPath(root->right, a, k);
    int val = 0;
    for(int i = a.size() - 1; i >= 0; i--){
        val += a[i];
        if(val == k){
            print(a, i);
        }
    }
    a.pop_back();
}
int main(){
    Node* root = buildTree();
    int k;
    cin>>k;
    vector<int>a;
    prinKPath(root, a, k);
    return 0;
}