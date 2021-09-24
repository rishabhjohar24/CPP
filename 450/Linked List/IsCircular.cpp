#include<bits/stdc++.h>
using namespace std;
struct Node{
    Node* next = NULL;
    int data;
};
Node* buildCLink(int n){
    Node* root = new Node();
    Node* temp = root;
    for(int i = 0; i < n; i++){
        int val;
        cin>>val;
        temp->data = val;
        (i < n - 1) ? temp->next = new Node() : temp->next = root;
        temp = temp->next;
    }
    return root;
}
void print(Node* root){
    Node* temp = root;
    while(root){
        cout<<root->data<<" ";
        if(root->next == temp){
            break;
        }
        root = root->next;
    }
}

bool isCircular(Node* root){
    Node* temp = root;
    while(temp){
        if(temp->next == root){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    Node* root = buildCLink(n);
    print(root);
    return 0;
}