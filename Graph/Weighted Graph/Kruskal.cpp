#include <bits/stdc++.h>
using namespace std;
struct edge
{
    int a, b, c;
};
int find(int a, vector<int> &par)
{
    if (par[a] == -1)
    {
        return a;
    }
    return a = find(par[a], par);
}
bool comp(edge x, edge y)
{
    return x.c < y.c;
}
int main()
{
    int n, m, sum = 0;
    cin >> n >> m;
    vector<edge> arr(m);
    vector<int> par(n + 1, -1);
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i].a >> arr[i].b >> arr[i].c;
    }
    sort(arr.begin(), arr.end(), comp);
    for (int i = 0; i < m; i++)
    {
        int a = find(arr[i].a, par);
        int b = find(arr[i].b, par);
        if (a != b)
        {
            sum += arr[i].c;
            par[a] = b;
        }
    }
    cout << sum << endl;
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// struct edge
// {
//     int a;
//     int b;
//     int w;
// };
// edge ar[100000];
// int par[10001] = {-1};
// bool comp(edge a, edge b)
// {
//     return (a.w < b.w) ? true : false;
// }
// int find(int a)
// {
//     if (par[a] == -1)
//     {
//         return a;
//     }
//     return par[a] = find(par[a]);
// }
// void merge(int a, int b)
// {
//     par[a] = b;
// }
// int main()
// {
//     memset(par, -1, sizeof(par));
//     int n, m, a, b, w, sum = 0;
//     cin >> n >> m;
//     for (int i = 0; i < m; i++)
//     {
//         cin >> ar[i].a >> ar[i].b >> ar[i].w;
//     }
//     sort(ar, ar + m, comp);
//     for (int i = 0; i < m; i++)
//     {
//         a = find(ar[i].a);
//         b = find(ar[i].b);
//         if (a != b)
//         {
//             sum += ar[i].w;
//             merge(a, b);
//         }
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         cout << par[i] << " ";
//     }
//     cout << sum;
//     return 0;
// }