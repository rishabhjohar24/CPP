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

int sumt(Node* root, int& ans){
    if(root == NULL){
        return 0;
    }
    int currSum = root->data + sumt(root->left, ans) + sumt(root->right, ans);
    ans = max(ans, currSum);
    return currSum;
}

int main(){
    Node* root = buildTree();
    int ans = INT_MIN;
    cout<<sumt(root, ans);
    return 0;
}