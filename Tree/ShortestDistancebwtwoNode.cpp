#include<bits/stdc++.h>
using namespace std;
struct Node {
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
    int var;
    cin>>var;
    if(var == -1){
        return NULL;
    }
    Node* root = new Node(var);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

Node* LCA(Node* root, int n1, int n2){
    if(!root){
        return NULL;
    }
    if(root->data == n1 || root->data == n2){
        return root;
    }
    Node* left = LCA(root->left, n1, n2);
    Node* right = LCA(root->right, n1, n2);
    
    if(left && right){
        return root;
    }
    if(!left && !right){
        return NULL;
    }
    if(left){
        return LCA(root->left, n1, n2);
    }
    return LCA(root->right, n1, n2);
}

int findDist(Node* root, int k, int dist){
    if(!root){
        return -1;
    }
    if(root->data == k){
        return dist;
    }
    int left = findDist(root->left, k, dist + 1);
    if(left != -1){
        return left;
    }
    return findDist(root->right, k, dist + 1);
}

int dist(Node* root, int n1, int n2){
    Node* lca = LCA(root, n1, n2);
    int d1 = findDist(lca, n1, 0);
    int d2 = findDist(lca, n2, 0);
    return d1 + d2;
}

int main(){
    Node* root = buildTree();
    int n1, n2;
    cin>>n1>>n2;
    cout<<dist(root, n1, n2);
    return 0;
}