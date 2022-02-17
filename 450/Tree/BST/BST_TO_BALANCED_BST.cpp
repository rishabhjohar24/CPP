#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  Node *left, *right;
  int data;
  Node(int val) : data(val), left(nullptr), right(nullptr) {}
};
Node *build()
{
  int val;
  cin >> val;
  if (val == -1)
  {
    return nullptr;
  }
  Node *root = new Node(val);
  root->left = build();
  root->right = build();
  return root;
}
void traversal(Node *root, vector<int> &arr, int x)
{
  if (!root)
  {
    return;
  }
  traversal(root->left, arr, x);
  if (x)
  {
    cout << root->data;
  }
  else
  {
    arr.push_back(root->data);
  }
  traversal(root->right, arr, x);
  return;
}
Node *balancedBST(vector<int> &arr, int l, int r)
{
  if (l > r)
  {
    return nullptr;
  }
  int mid = (l + r) >> 1;
  Node *root = new Node(arr[mid]);
  root->left = balancedBST(arr, l, mid - 1);
  root->right = balancedBST(arr, mid + 1, r);
  return root;
}
int main()
{
  Node *root = build();
  vector<int> arr;
  traversal(root, arr, 0);
  root = balancedBST(arr, 0, arr.size() - 1);
  traversal(root, arr, 1);
  return 0;
}