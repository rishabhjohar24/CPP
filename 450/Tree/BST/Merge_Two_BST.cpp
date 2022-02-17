#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int data;
  Node *left, *right;
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
  root->left = build();
  return root;
}
void store(Node *root, vector<int> &arr)
{
  if (!root)
  {
    return;
  }
  store(root->left, arr);
  arr.push_back(root->data);
  store(root->right, arr);
  return;
}
void traverse(Node *root)
{
  if (!root)
  {
    return;
  }
  traverse(root->left);
  cout << root->data << " ";
  traverse(root->right);
}
vector<int> mergeArray(vector<int> &arr1, vector<int> &arr2)
{
  int i = 0, j = 0, n = arr1.size(), m = arr2.size();
  vector<int> arr(n + m);
  while (i < n && j < m)
  {
    arr[i + j] = (arr1[i] >= arr2[j]) ? arr2[j], j++ : arr1[i], i++;
  }
  while (i < n)
  {
    arr[i + j] = arr1[i];
    i++;
  }
  while (j < m)
  {
    arr[i + j] = arr2[j];
    j++;
  }
  return arr;
}
Node *mergeBST(vector<int> &arr, int l, int r)
{
  if (l > r)
  {
    return NULL;
  }
  int mid = (l + r) >> 1;
  Node *root = new Node(arr[mid]);
  root->left = mergeBST(arr, l, mid - 1);
  root->right = mergeBST(arr, mid + 1, r);
  return root;
}
int main()
{
  Node *root1 = build();
  Node *root2 = build();
  vector<int> arr1, arr2, arr;
  store(root1, arr1);
  store(root2, arr2);
  arr = mergeArray(arr1, arr2);
  Node *root = mergeBST(arr, 0, arr1.size() + arr2.size() - 1);
  traverse(root);
  return 0;
}