#include <bits/stdc++.h>
using namespace std;
int minTime(vector<vector<int>> &ass, vector<vector<int>> &time, vector<int> &ent, vector<int> &exi, int m)
{
    int t1[m], t2[m];
    t1[0] = ass[0][0] + ent[0];
    t2[0] = ass[1][0] + ent[1];
    for (int i = 1; i < m; i++)
    {
        t1[i] = min(t1[i - 1] + ass[0][i], t2[i] + time[1][i] + ass[0][i]);
        t2[i] = min(t2[i - 1] + ass[1][i], t1[i] + time[0][i] + ass[1][i]);
    }
    return min(t2[m - 1] + exi[1], t1[m - 1] + exi[0]);
}
int main()
{
    srand(time(0));
    int n, m;
    vector<vector<int>> ass, time;
    vector<int> exi, ent, var;
    m = rand() % 20 + 1;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < m; j++)
        {
            n = rand() % 100 + 1;
            var.push_back(n);
        }
        ass.push_back(var);
        var.clear();
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < m; j++)
        {
            n = rand() % 50 + 1;
            var.push_back(n);
        }
        time.push_back(var);
        var.clear();
    }
    for (int i = 0; i < 2; i++)
    {
        n = rand() % 20 + 1;
        ent.push_back(n);
    }
    for (int i = 0; i < 2; i++)
    {
        n = rand() % 20 + 1;
        exi.push_back(n);
    }
    cout << minTime(ass, time, ent, exi, m);
    return 0;
}