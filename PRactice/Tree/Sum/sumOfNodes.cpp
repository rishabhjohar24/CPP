#include<bits/stdc++.h>
using namespace std;
struct Node{
    Node* left, *right;
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

int sum(Node* root){
    if(!root){
        return 0;
    }
    int val = root->data;
    val += sum(root->left) + sum(root->right);
    return val;
}

int whoseParentis_X(Node* root, Node* parent, int x){
    if(!root){
        return 0;
    }
    int k = 0;
    if(root->data == x){
        k += parent->data;
    }
    k += whoseParentis_X(root->left, root, x) + whoseParentis_X(root->right, root, x);
    return k;
}

int leftLeavesSum(Node* root){
    if(!root){
        return 0;
    }
    int k = 0;
    if(root->left && !root->left->left && !root->left->right){
        k += root->left->data;
    }
    k += leftLeavesSum(root->left) + leftLeavesSum(root->right);
    return k;
}

int rightLeavesSum(Node* root){
    if(!root){
        return 0;
    }
    int k = 0;
    if(root->right && !root->right->left && !root->right->right){
        k += root->right->data;
    }
    k += rightLeavesSum(root->left);
    k += rightLeavesSum(root->right);
    return k;
}

void printSumOfPerfectBt(Node* root, int& level){
    if(!root){
        return;
    }
    level++;
    printSumOfPerfectBt(root->left, level);
}

void diagonalSum(Node* root, int a[], int l){
    if(!root){
        return;
    }
    a[l] += root->data;
    diagonalSum(root->left, a, l + 1);
    diagonalSum(root->right, a, l);
}

void pairRootData(Node* root, map<int, int>&a, int& flag, int p){
    if(!root){
        return;
    }
    if(a.find(root->data) == a.end()){
        a[p - root->data]++;
    }
    else{
        flag = 1;
        return;
    }
    pairRootData(root->left, a, flag, p);
    pairRootData(root->right, a, flag, p);
    a.erase(p - root->data);
}

int main(){
    Node* root = buildTree();
    int x = 0, a[100] = {0};
    map<int, int> ab;
    // cin>>x;
    pairRootData(root, ab, x, root->data);
    (x) ? cout<<1 : cout<<0;

    //for diagonal sum
    // for(int i = 0; i < 100; i++){
    //     if(!a[i]){
    //         break;
    //     }
    //     cout<<a[i]<<" ";
    // }
    return 0;
}
// 15 10 8 -1 -1 12 -1 -1 20 16 -1 -1 25 -1 -1

//pair root data
//Given a binary tree, find if there is a pair in root
// to a leaf path such that sum of values in pair is equal 
// to root’s data. For example, in below tree there are no 
// pairs in any root to leaf path with sum equal to root’s 
// data.