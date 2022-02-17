#include <bits/stdc++.h>
using namespace std;
int ans = INT_MAX;
void minLights(vector<int> &arr, int b, int idx, int right, int n, int first, int cnt)
{
  if (n <= right || (idx <= arr.size()))
  {
    ans = min(ans, cnt);
    return;
  }
  if (right < n && (idx > n) && ans == INT_MAX)
  {
    ans = -1;
    return;
  }
  if (first && idx - b + 1 > 1 && arr[idx])
  {
    ans = -1;
    return;
  }
  else
  {
    first = 0;
  }
  if (!arr[idx])
  {
    minLights(arr, b, idx + 1, right, n, first, cnt);
  }
  minLights(arr, b, idx + 1, idx + b - 1, n, first, cnt + 1);
  minLights(arr, b, idx + 1, right, n, first, cnt);
}
int main()
{
  int n, b, curr = 0, cnt = 0, right, flag = 0;
  cin >> n >> b;
  vector<int> arr(n + 1, 0);
  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
  }
  int tempRight;
  for (int i = 1; i <= n; i++)
  {
    if (arr[i])
    {
      if (!curr)
      {
        if (i - b + 1 <= 1)
        {
          cnt++;
          curr = i;
          right = i + b - 1;
          tempRight = right;
        }
        else
        {
          flag = 1;
          break;
        }
      }
      while (!arr[tempRight])
      {
        tempRight--;
      }
      cnt++;
      curr = tempRight;
      i = curr;
      right = tempRight + b - 1;
      tempRight = right;
    }
  }
  (right < n && flag) ? cout << -1 : cout << cnt;
  // minLights(arr, b, 1, 0, n, 1, 0);
  // cout << ans;
  return 0;
}
