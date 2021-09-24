#include <bits/stdc++.h>
using namespace std;
int score(int n)
{
    vector<int> t(n + 1, 0);
    t[0] = 1;
    for (int i = 3; i < n + 1; i++)
    {
        t[i] += t[i - 3];
    }
    for (int i = 5; i < n + 1; i++)
    {
        t[i] += t[i - 5];
    }
    for (int i = 10; i < n + 1; i++)
    {
        t[i] += t[i - 10];
    }
    return t[n];
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        cout << score(n) << endl;
    }
    return 0;
}