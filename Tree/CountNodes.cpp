#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
Node *buildTree()
{
    int val;
    cin >> val;
    if (val == -1)
    {
        return NULL;
    }
    Node *root = new Node(val);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
int countDFS(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int k = 1;
    k += countDFS(root->left);
    k += countDFS(root->right);
    return k;
}
int countBFS(Node *root)
{
    int k = 0;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        root = q.front();
        q.pop();
        k++;
        if (root->left)
        {
            q.push(root->left);
        }
        if (root->right)
        {
            q.push(root->right);
        }
    }
    return k;
}
int main()
{
    Node *root = buildTree();
    cout << (countDFS(root) == countBFS(root));
    return 0;
}