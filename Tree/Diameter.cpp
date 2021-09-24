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
int diameter(Node* root, int* height){
    if(root == NULL){
        *height = 0;
        return 0;
    }
    int lh = 0, rh = 0;
    int ld = diameter(root->left, &lh);
    int rd = diameter(root->right, &rh);
    int currd = lh + rh + 1;
    *height = max(lh, rh) + 1;
    return max(currd, max(ld, rd));
}
int main(){
    Node* root = buildTree();
    int height = 0;
    cout<<diameter(root, &height);
    return 0;
}

//complexity is high O(n^2)
// int height(Node* root){
//     if(root == NULL){
//         return 0;
//     }
//     int l = height(root->left);
//     int r = height(root->right);
//     return max(l, r) + 1;
// }
// int diameter(Node* root){
//     if(root == NULL){
//         return 0;
//     }
//     int lheight = height(root->left);
//     int rheight = height(root->right);
//     int currDiameter = lheight + rheight + 1;
//     int lDia = diameter(root->left);
//     int rDia = diameter(root->right);
//     return max(currDiameter, max(lDia, rDia));
// }