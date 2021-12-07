#include <bits/stdc++.h>
using namespace std;
vector<int> solve(int n)
{
    vector<vector<int>> arr(n + 1, vector<int>(n + 1, 0));
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == i || !j)
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
            }
            if (i == n - 1)
            {
                ans.push_back(arr[i][j]);
            }
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr = solve(n);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}