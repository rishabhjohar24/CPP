#include<bits/stdc++.h>
using namespace std;
struct Node{
    Node *left, *right;
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

void inorder(Node* root){
    if(!root){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

Node* inorderSuccessor(Node* root){
    Node* curr = root;
    while(curr && curr->left){
        curr = curr->left;
    }
    return curr;
}

Node* deleteBST(Node* root, int key){
    if(!root){

    }
    if(key < root->data){
        root->left = deleteBST(root->left, key);
    }
    else if(key > root->data){
        root->right = deleteBST(root->right, key);
    }
    else {
        if(!root->left){
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if(!root->right){
            Node* temp = root->left;
            free(root);
            return temp;
        }
        Node* temp = inorderSuccessor(root->right);
        root->data = temp->data;
        root->right = deleteBST(root->right, temp->data);
    }
    return root;
}
int main(){
    Node* root = buildTree();
    inorder(root);
    cout<<"\n";
    Node* temp = root;
    int key = -11;
    while(key){
        cin>>key;
        if(key ==  -1){
            inorder(root);
            break;
        }
        temp = deleteBST(temp, key);
        inorder(root);
        cout<<"\n";
    }
    return 0;
}