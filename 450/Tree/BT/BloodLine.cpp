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

//this code is for maximum sum
// void sumOfLongestBloodLine(Node* root){
//     if(!root || (!root->left && !root->right)){
//         return;
//     }
//     sumOfLongestBloodLine(root->left);
//     sumOfLongestBloodLine(root->right);
//     int l, r, t = root->data;
//     if(root->left != NULL){
//         l = t + root->left->data;
//     }
//     if(root->right != NULL){
//         r = t + root->right->data;
//     }
//     (l > r) ? root->data = l : root->data = r;
// }

void sumOfLongestBloodLine(Node* root, int len, int sum, int& maxSum, int& maxLen){
    if(!root){
        if(maxLen < len){
            maxLen = len;
            maxSum = sum;
        }
        else if(maxLen == len && maxSum < sum){
            maxSum = sum;
        }
        return;
    }
    sumOfLongestBloodLine(root->left, len + 1, sum + root->data, maxSum, maxLen);
    sumOfLongestBloodLine(root->right, len + 1, sum + root->data, maxSum, maxLen);
}

int main(){
    Node* root = buildTree();
    int maxLen = 0, maxSum = 0;
    sumOfLongestBloodLine(root, 0, 0, maxSum, maxLen);
    cout<<maxSum;
    return 0;
}