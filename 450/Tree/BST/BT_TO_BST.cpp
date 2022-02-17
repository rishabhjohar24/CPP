#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int data;
  Node *left, *right;
  Node(int val)
  {
    data = val;
    left = right = NULL;
  }
};
Node *build()
{
  int val;
  cin >> val;
  if (val == -1)
  {
    return NULL;
  }
  Node *root = new Node(val);
  root->left = build();
  root->right = build();
  return root;
}
void solve(Node *root, vector<int> &arr, int x)
{
  if (!root)
  {
    return;
  }
  solve(root->left, arr, x);
  x ? root->data = arr.back(), arr.pop_back() : arr.push_back(root->data);
  solve(root->right, arr, x);
  return;
}
void print(Node *root)
{
  if (!root)
  {
    return;
  }
  print(root->left);
  cout << root->data << " ";
  print(root->right);
  return;
}
int main()
{
  Node *root = build();
  vector<int> arr;
  print(root);
  cout << "\n";
  solve(root, arr, 0);
  sort(arr.begin(), arr.end(), greater<int>());
  solve(root, arr, 1);
  print(root);
  return 0;
}