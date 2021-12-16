#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<ll> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  ll maxSum = INT_MIN, sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
    maxSum = max(maxSum, sum);
    if (sum < 0)
    {
      sum = 0;
    }
  }
  cout << maxSum;
  return 0;
}