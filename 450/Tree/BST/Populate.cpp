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
    left = right = nullptr;
  }
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
void inOrder(Node *root, vector<int> &arr)
{
  if (!root)
  {
    return;
  }
  inOrder(root->left, arr);
  arr.push_back(root->data);
  inOrder(root->right, arr);
}
int main()
{
  Node *root = build();
  vector<int> arr;
  inOrder(root, arr);
  int n = arr.size();
  for (int i = 0; i < n; i++)
  {
    if (i < n - 1)
    {
      cout << arr[i] << "->" << arr[i + 1] << " ";
    }
    else
    {
      cout << arr[i] << "->-1";
    }
  }
  return 0;
}