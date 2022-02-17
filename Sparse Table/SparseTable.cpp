#include <bits/stdc++.h>
using namespace std;
class SparseTable
{
public:
  const static int row = 1e6, col = 25;
  int rMinq[row][col];
  int rMaxq[row][col];
  int rSumq[row][col];
  void build(vector<int> &arr)
  {
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
      rMinq[i][0] = rMaxq[i][0] = rSumq[i][0] = arr[i];
    }
    for (int j = 1; (1 << j) <= n; j++)
    {
      for (int i = 0; i + (1 << j) <= n; i++)
      {
        rMinq[i][j] = min(rMinq[i][j - 1], rMinq[i + (1 << (j - 1))][j - 1]);
        rMaxq[i][j] = max(rMaxq[i][j - 1], rMaxq[i + (1 << (j - 1))][j - 1]);
        rSumq[i][j] = rSumq[i][j - 1] + rSumq[i + (1 << (j - 1))][j - 1];
      }
    }
  }
  int rangeMinQuery(int l, int r, int n)
  {
    int val = INT_MAX;
    for (int j = log2(n) + 1; j >= 0; j--)
    {
      if ((1 << j) <= r - l + 1)
      {
        val = min(rMinq[l][j], val);
        l += (1 << j);
      }
    }
    return val;
  }
  int rangeMaxQuery(int l, int r, int n)
  {
    int val = INT_MIN;
    for (int j = log2(n) + 1; j >= 0; j--)
    {
      if ((1 << j) <= r - l + 1)
      {
        val = max(rMinq[l][j], val);
        l += (1 << j);
      }
    }
    return val;
  }
  int rangeSumQuery(int l, int r, int n)
  {
    int val = 0;
    for (int j = log2(n) + 1; j >= 0; j--)
    {
      if ((1 << j) <= r - l + 1)
      {
        val += rSumq[l][j];
        l += (1 << j);
      }
    }
    return val;
  }
};
int main()
{
  SparseTable st;
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  st.build(arr);
  int l, r;
  cin >> l >> r;
  cout << st.rangeMinQuery(l, r, n);
  return 0;
}