#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(0));
    int n = rand() % 10 + 1, max_sq = INT_MIN;
    int m = rand() % 10 + 1;
    vector<vector<int>> arr(n, vector<int>(m, 0)), aux(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = rand() % 2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        aux[i][0] = arr[i][0];
        max_sq = max(max_sq, aux[i][0]);
    }
    for (int i = 0; i < m; i++)
    {
        aux[0][i] = arr[0][i];
        max_sq = max(max_sq, aux[0][i]);
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (arr[i][j])
            {
                aux[i][j] = min({aux[i][j - 1], aux[i - 1][j], aux[i - 1][j - 1]}) + 1;
            }
            else
            {
                aux[i][j] = 0;
            }
            max_sq = max(max_sq, aux[i][j]);
        }
    }
    cout << max_sq;
    return 0;
}