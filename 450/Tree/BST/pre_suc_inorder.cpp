#include<bits/stdc++.h>
using namespace std;
struct Node{
    Node *right, *left;
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

void pre_suc(Node* root, Node*& pre, Node*& suc, int key){
    if(!root){
        return;
    }
    if(root->data > key){
        suc = root;
        pre_suc(root->left, pre, suc, key);
    }
    else if(root->data < key){
        pre = root;
        pre_suc(root->right, pre, suc, key);
    }
    else{
        if(root->left){
            Node* temp = root->left;
            while(temp->right){
                temp = temp->right;
            }
            pre = temp;
        }
        if(root->right){
            Node* temp = root->right;
            while(temp->left){
                temp = temp->left;
            }
            suc = temp;
        }
        return;
    }
}
int main(){
    Node* root = buildTree();
    Node* pre = NULL, *suc = NULL;
    int key;
    cin>>key;
    pre_suc(root, pre, suc, key);
    (pre) ? cout<<pre->data : cout<<-1;
    cout<<"\n";
    (suc) ? cout<<suc->data : cout<<-1;
    return 0;
}