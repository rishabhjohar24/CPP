#include <bits/stdc++.h>
using namespace std;
int solve(int q, int n, int k, map<int, int> &mp, int x, int ans)
{
    if (k == x)
    {
        return ans;
    }
    if (mp.find(x) != mp.end())
    {
        return solve(q, n, k, mp, x + 1, ans);
    }
    mp[x]++;
    return solve(q, n, k, mp, )
}
int main()
{
    int q, n, k;
    cin >> q >> n >> k;
    cout << solve(q, n, k);
}