#include <bits/stdc++.h>
using namespace std;
struct Node
{
    Node *left, *right;
    int data;
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
int main()
{
    Node *root = buildTree();
    queue<Node *> q;
    int k, ans = 0, par, nd;
    cin >> k >> nd;
    q.push(root);
    map<int, int> parent;
    parent[root->data] = -1;
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        if (node->left)
        {
            parent[node->left->data] = node->data;
            q.push(node->left);
        }
        if (node->right)
        {
            parent[node->right->data] = node->data;
            q.push(node->right);
        }
    }

    for (int i = 0; i < k && nd != -1; i++)
    {
        nd = parent[nd];
    }
    cout << nd;
    return 0;
}