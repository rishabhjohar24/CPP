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

void traverse(Node* root){
    if(!root){
        return;
    }
    traverse(root->left);
    traverse(root->right);
    cout<<root->data<<" ";
}

void arrayMaker(int arr[], int n){
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
}

// void print(int arr[], int n){
//     for(int i = 0; i < n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"\n";
// }

int search(int start, int end, int val, int in[]){
    for(int i = start; i <= end; i++){
        if(in[i] == val){
            return i;
        }
    }
    return -1;
}

Node* construct(int pre[], int in[], int start, int end){
    static int idx = 0;
    if(start > end){
        return NULL;
    }
    int val = pre[idx] ;
    idx++;
    Node* root = new Node(val);
    if(start == end){
        return root;
    }
    int pos = search(start, end, val, in);
    root->left = construct(pre, in, start, pos - 1);
    root->right = construct(pre, in, pos + 1, end);
    return root;
}

int main(){
    int n;
    cin>>n;
    int *pre = new int(n), *in = new int(n);
    arrayMaker(in, n);
    arrayMaker(pre, n);
    Node* root = construct(pre, in, 0, n - 1);
    traverse(root);
    return 0;
}