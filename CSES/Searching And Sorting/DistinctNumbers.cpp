#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, q;
  cin >> n;
  set<int> s;
  for (int i = 0; i < n; i++)
  {
    cin >> q;
    s.insert(q);
  }
  cout << s.size();
  return 0;
}