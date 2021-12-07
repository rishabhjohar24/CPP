#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(0));
    int n = rand() % 10 + 1, m = rand() % 10 + 1;
    cout << "N = " << n << " M = " << m << endl;
    int arr[n][m], t[n][m];
    memset(t, 0, sizeof(t));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = rand() % 1000 + 1;
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
    for (int i = 0; i < m; i++)
    {
        t[n - 1][i] = arr[n - 1][i];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j < m; j++)
        {
            int mx = INT_MIN;
            if (j + 1 < m && mx < t[i + 1][j + 1])
            {
                mx = t[i + 1][j + 1];
            }
            if (j - 1 >= 0 && mx < t[i + 1][j - 1])
            {
                mx = t[i + 1][j - 1];
            }
            if (j > m && mx < t[i + 1][j])
            {
                mx = t[i + 1][j];
            }
            t[i][j] = arr[i][j] + mx;
        }
    }
    int gmax = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}