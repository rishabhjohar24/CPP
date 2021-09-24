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

string dupe(Node* root, map<string, int>& a){
    if(!root){
        return "$";
    }
    string s = "";
    s += to_string(root->data);
    s += dupe(root->left, a);
    s += dupe(root->right, a);
    a[s]++;
    return s;
}
int main(){
    Node* root = buildTree();
    map <string, int> a;
    dupe(root, a);
    for(auto i : a){
        if(i.second > 1){
            cout<<i.first<<endl;
        }
    }
    return 0;
}