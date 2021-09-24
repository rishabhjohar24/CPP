#include<bits/stdc++.h>
using namespace std;
struct Node{
    Node *left, *right, *mid;
    int data;
    Node(int val){
        left = NULL;
        right = NULL;
        mid = NULL;
        data = val;
    }
};

Node* buildTree(int N, int arr[], int i, int x, int val){
    if(i == -1){
        return NULL;
    }
    Node* root;
    if(i == N){
        root = new Node(x);
        root->left = buildTree(N, arr, i - 1, x, -1);
        root->mid = buildTree(N, arr, i - 1, x, 0);
        root->right = buildTree(N, arr, i - 1, x, 1);
    }
    else if(arr[i] == -10){
        root = new Node(val);
        root->left = buildTree(N, arr, i - 1, x, -1);
        root->mid = buildTree(N, arr, i - 1, x, 0);
        root->right = buildTree(N, arr, i - 1, x, 1);
    }
    else{
        root = new Node(arr[i]);
        root->left = buildTree(N, arr, i - 1, x, -1);
        root->mid = buildTree(N, arr, i - 1, x, 0);
        root->right = buildTree(N, arr, i - 1, x, 1);
    }
    return root;
}
void sol(Node* root, int pre, vector<int>& A, int x){
    if(pre > x){
        return;
    }
    if(!root){
        A.push_back(pre);
        return;
    }
    pre += root->data;
    sol(root->left, pre, A, x);
    sol(root->mid, pre, A, x);
    sol(root->right, pre, A, x); 
}
bool ans(vector<int> A){
    for(int i = 0; i < A.size(); i++){
        if(!A[i]){
            return true;
        }
    }
    return false;
}
void traverse(Node* root){
    if(!root){
        return;
    }
    cout<<root->data<<" ";
    traverse(root->left);
    traverse(root->mid);
    traverse(root->right);
}
int main(){
    int N, x;
    cin>>N>>x;
    int arr[N];
    vector<int> A;
    for(int i = 0; i < N; i++){
        cin>>arr[i];
    }
    Node* root = buildTree(N, arr, N, x, arr[N - 1]);
    sol(root, 0, A, x);
    for(int i = 0; i < A.size(); i++) cout<<A[i]<<" ";
    // traverse(root);
    // cout<<"\n";
    // (ans(A)) ? cout<<"YES" : cout<<"NO";
    return 0;
}