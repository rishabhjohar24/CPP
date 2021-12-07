#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, B;
  cin >> n >> B;
  vector<int> A(n);
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }
  int mid, l = 0, r = A.size();
  while (l < r)
  {
    mid = (l + r) >> 1;
    if (A[mid] == B)
    {
      while (mid + 1 < n && A[mid + 1] == B)
      {
        mid++;
      }
      break;
    }
    else if (A[mid] > B)
    {
      r = mid;
    }
    else
    {
      l = mid + 1;
    }
  }
  while (mid > -1 && A[mid] > B)
  {
    mid--;
  }
  cout << mid + 1;
  return 0;
}