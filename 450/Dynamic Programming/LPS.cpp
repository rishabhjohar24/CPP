#include <bits/stdc++.h>
using namespace std;
string reverse(string x)
{
    int i = 0, j = x.size() - 1;
    while (i < j)
    {
        char temp = x[i];
        x[i] = x[j];
        x[j] = temp;
        i++;
        j--;
    }
    return x;
}
int lps(string x, int n)
{
    string y = reverse(x);
    int t[n + 1][n + 1];
    memset(t, 0, sizeof(t));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (x[i - 1] == y[j - 1])
            {
                t[i][j] = 1 + t[i - 1][j - 1];
            }
            else
            {
                t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
    return t[n][n];
}
int main()
{
    string s;
    cin >> s;
    cout << lps(s, s.size());
    return 0;
}