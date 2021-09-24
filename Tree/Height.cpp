#include<iostream>
using namespace std;
struct Node{
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
int hmax = 1;
//not goodLooking ;)
// void height(Node* root, int k){
//     if(root == NULL){
//         return;
//     }
//     if(k > hmax){
//         hmax = k;
//     }
//     height(root->left, k + 1);
//     height(root->right, k + 1);
// }
int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int lheight = height(root->left);
    int rheight = height(root->right);
    return max(lheight, rheight) + 1;
}
int main(){
    Node* root = buildTree();
    cout<<height(root);
    return 0;
}