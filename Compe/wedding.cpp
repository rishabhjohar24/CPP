#include <bits/stdc++.h>
using namespace std;
void solve(string s, int y, int n, int i, int &ans, int val)
{
    if (i == n)
    {
        ans = min(ans, val);
        return;
    }
    string p;
    for (i; i < n; i++)
    {
        p += s[i];
        if (stoi(p) <= y)
        {
            solve(s, y, n, i + 1, ans, val + 1);
        }
    }
    return;
}
int main()
{
    string s;
    int n, y, ans = INT_MAX;
    cin >> s >> y >> n;
    solve(s, y, n, 0, ans, 0);
    cout << ans;
    return 0;
}