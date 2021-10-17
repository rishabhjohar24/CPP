#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp, p = -1;
    cin >> n;
    int a[n];
    for (int k = 0; k < n; k++)
    {
        cin >> a[k];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            p++;
            temp = a[p];
            a[p] = a[i];
            a[i] = temp;
        }
    }
    for (int j = 0; j < n; j++)
    {
        cout << a[j] << " ";
    }
    cout << endl
         << "________________________________" << endl;
    int i = 1, j = p + 1;
    while (i != j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i = i + 2;
        j = j + 1;
        for (int j = 0; j < n; j++)
        {
            cout << a[j] << " ";
        }
        cout << endl
             << "________________________________" << endl;
    }
    for (int j = 0; j < n; j++)
    {
        cout << a[j] << " ";
    }
    return 0;
}