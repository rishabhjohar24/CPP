//Double the first element and move zero to end
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        return a[0];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != 0)
        {
            temp++;
        }
        if (a[i] != 0 && a[i] == a[i + 1])
        {
            a[i] = 2 * a[i];
            a[i + 1] = 0;
        }
    }
    if (a[n - 1] != 0)
    {
        temp++;
    }
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[j] = a[i];
            j++;
        }
    }
    for (int i = j; i < n; i++)
    {
        a[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}