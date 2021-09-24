#include <bits/stdc++.h>
using namespace std;
struct Tree
{
    Tree *right;
    Tree *left;
    int data;
    int liss;
    Tree(int val)
    {
        right = NULL;
        left = NULL;
        data = val;
        liss = 0;
    }
};
Tree *buildTree()
{
    int val;
    cin >> val;
    if (val == -1)
    {
        return NULL;
    }
    Tree *root = new Tree(val);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
int LISS(Tree *root)
{
    if (!root)
    {
        return 0;
    }
    if (root->liss)
    {
        return root->liss;
    }
    if (!root->right && !root->left)
    {
        return (root->liss = 1);
    }
    int excl = LISS(root->left) + LISS(root->right);
    int incl = 1;
    if (root->left)
    {
        incl += LISS(root->left->right) + LISS(root->left->left);
    }
    if (root->right)
    {
        incl += LISS(root->right->left) + LISS(root->right->left);
    }
    return max(incl, excl);
}
int main()
{
    Tree *root = buildTree();
    cout << LISS(root);
    return 0;
}