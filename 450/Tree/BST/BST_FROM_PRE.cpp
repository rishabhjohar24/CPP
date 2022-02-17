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
Node *solve(vector<int> &arr, int &i, int ele, int min, int max)
{
  if (i >= arr.size())
  {
    return NULL;
  }
  Node *root;
  if (ele > min && ele < max)
  {
    root = new Node(ele);
    i++;
    if (arr[i] < root->data)
    {
      root->left = solve(arr, i, arr[i], min, root->data);
    }
    if (arr[i] > root->data)
    {
      root->right = solve(arr, i, arr[i], root->data, max);
    }
  }
  return root;
}
int main()
{
  int n, idx = 0;
  cin >> n;
  vector<int> pre(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> pre[i];
  }
  Node *root = solve(pre, idx, pre[0], INT_MIN, INT_MAX);
  print(root);
  return 0;
}