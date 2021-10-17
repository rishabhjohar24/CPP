#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int n;
        cin >> n;
        cin >> s;
        map<long long int, long long int> m, b;
        for (int i = 0; i < s.size(); i++)
        {
            m[(s[i] - '0') + i]++;
            b[i - (s[i] - '0')]++;
        }
        long long int res = 0;
        for (auto i : m)
        {
            res += (i.second * (i.second - 1)) / 2;
        }
        for (auto i : b)
        {
            res += (i.second * (i.second - 1)) / 2;
        }
        cout << res << endl;
    }
    return 0;
}