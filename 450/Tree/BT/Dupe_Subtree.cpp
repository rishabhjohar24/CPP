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

string check(Node *root, map<string, int> &a)
{
    if (!root)
    {
        return "$";
    }
    string s = "";
    if (!root->right && !root->left)
    {
        s = to_string(root->data);
        return s;
    }
    s += to_string(root->data);
    s += check(root->left, a);
    s += check(root->right, a);
    a[s]++;
    return s;
}
int main()
{
    Node *root = buildTree();
    map<string, int> a;
    check(root, a);
    int flag = 1;
    for (auto i : a)
    {
        if (i.second > 1)
        {
            cout << "YES";
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        cout << "NO";
    }
    return 0;
}