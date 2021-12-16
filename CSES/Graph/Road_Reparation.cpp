#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct Edge
{
  int a;
  int b;
  ll c;
};
vector<Edge> arr;
int par[200001];
bool comp(Edge a, Edge b)
{
  return a.c < b.c;
}
int find(int a)
{
  if (par[a] == -1)
  {
    return a;
  }
  return par[a] = find(par[a]);
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  Edge temp;
  int n, m;
  ll ans = 0;
  int cnt = 0, a, b;
  cin >> n >> m;
  for (int i = 0; i <= n; i++)
  {
    par[i] = -1;
  }
  for (int i = 0; i < m; i++)
  {
    cin >> temp.a >> temp.b >> temp.c;
    arr.push_back(temp);
  }
  sort(arr.begin(), arr.end(), comp);
  for (int i = 0; i < m; i++)
  {
    a = find(arr[i].a);
    b = find(arr[i].b);
    if (a != b)
    {
      cnt++;
      par[a] = b;
      ans += arr[i].c;
    }
  }
  (cnt == n - 1) ? cout << ans : cout << "IMPOSSIBLE";
  return 0;
}
// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;

// struct Edge
// {
//   int a;
//   int b;
//   ll weight;
// };

// vector<Edge> edgeList;
// int _par[200001];

// bool comp(Edge a, Edge b)
// {
//   return a.weight < b.weight;
// }

// int find(int a)
// {
//   if (_par[a] == -1)
//     return a;

//   return _par[a] = find(_par[a]);
// }

// bool merge(int a, int b)
// {
//   a = find(a);
//   b = find(b);

//   if (a == b)
//     return false;

//   _par[a] = b;
//   return true;
// }

// int main()
// {
//   ifstream in("x.txt");
//   ofstream out("y.txt");
//   int n, m;
//   ll res = 0;
//   int addedEdgeCount = 0;
//   Edge temp;

//   cin >> n >> m;

//   for (int i = 1; i <= n; i++)
//     _par[i] = -1;

//   for (int i = 1; i <= m; i++)
//     cin >> temp.a >> temp.b >> temp.weight, edgeList.push_back(temp);

//   sort(edgeList.begin(), edgeList.end(), comp);

//   for (Edge e : edgeList)
//   {
//     if (merge(e.a, e.b))
//       res += e.weight, addedEdgeCount++;
//   }

//   if (addedEdgeCount == n - 1)
//     cout << res;
//   else
//     cout << "IMPOSSIBLE";
// }