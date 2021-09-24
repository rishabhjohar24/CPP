#include <bits/stdc++.h>
using namespace std;
int lcs(string x, string y, int n, int m)
{
    int t[n + 1][m + 1], result = INT_MIN;
    memset(t, 0, sizeof(t));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (x[i - 1] == y[j - 1])
            {
                t[i][j] = 1 + t[i - 1][j - 1];
                result = max(result, t[i][j]);
            }
            else
            {
                t[i][j] = 0;
            }
        }
    }
    return result;
}
int main()
{
    string a, b;
    cin >> a >> b;
    cout << lcs(a, b, a.size(), b.size());
    return 0;
}