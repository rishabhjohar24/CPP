#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll sz = 1e6 + 1;
const ll max_sz = log2(sz + 1);
vector<vector<ll>> adj(sz + 1), b_lift(sz, vector<ll>(max_sz, -1));
vector<ll> par(sz, -1), in(sz, 0), level(sz, 0);
vector<bool> visited(sz, 0);

// Binary Lifting
void preProcess(ll n)
{
  for (ll i = 1; i <= n; i++)
  {
    b_lift[i][0] = par[i];
  }
  for (ll i = 1; (1 << i) < n; i++)
  {
    for (ll j = 1; j <= n; j++)
    {
      if (b_lift[j][i - 1] != -1)
      {
        b_lift[j][i] = b_lift[b_lift[j][i - 1]][i - 1];
      }
    }
  }
}
void DFS(int node)
{
  visited[node] = 1;
  for (auto child : adj[node])
  {
    if (!visited[child])
    {
      level[child] = level[node] + 1;
      DFS(child);
    }
  }
}

ll LCA(ll a, ll b, ll n)
{
  if (level[a] > level[b])
  {
    swap(a, b);
  }
  ll diff = level[b] - level[a];
  while (diff)
  {
    ll jump = log2(diff);
    b = b_lift[b][jump];
    diff -= (1 << jump);
  }
  if (a == b)
  {
    return a;
  }
  for (ll i = n; i >= 0; i--)
  {
    if (b_lift[b][i] != -1 && b_lift[b][i] != b_lift[a][i])
    {
      b = b_lift[b][i];
      a = b_lift[a][i];
    }
  }
  return b_lift[a][0];
}
void solve(ll root, ll p, ll q, ll n)
{
  level[root] = 1;
  DFS(root);
  preProcess(n);
  cout << LCA(p, q, n);
}
int main()
{
  ll n, m, p, q, root;
  cin >> n >> m;
  cin >> p >> q;
  for (ll i = 0; i < m; ++i)
  {
    ll a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    par[b] = a;
    in[b]++;
  }
  for (ll i = 1; i <= n; i++)
  {
    if (!in[i])
    {
      root = i;
      break;
    }
  }
  solve(root, p, q, n);
  return 0;
}
// in naive approach first we try to make same both
// nodes on same level and then lift both nodes untill there
// parents get same

// Naive approach:
// void DFS(int node)
// {
//     visit[node] = 1;
//     for (auto child : adj[node])
//     {
//         if (!visit[child])
//         {
//             level[child] = level[node] + 1;
//             DFS(child);
//         }
//     }
// }
// void lift(int diff, int &lower)
// {
//     while (diff)
//     {
//         lower = par[lower];
//         diff--;
//     }
// }
// int main()
// {
//     int n, m, a, b, root, p, q;
//     cin >> n >> m;
//     cin >> p >> q;
//     for (int i = 0; i < m; i++)
//     {
//         cin >> a >> b;
//         adj[a].push_back(b);
//         par[b] = a;
//         in[b]++;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         if (!in[i])
//         {
//             root = i;
//             break;
//         }
//     }
//     DFS(root);
//     int diff = abs(level[p] - level[q]);
//     (level[p] > level[q]) ? lift(diff, p) : lift(diff, q);
//     if (p == q)
//     {
//         cout << p << "\n";
//         exit(0);
//     }
//     while (par[p] != par[q])
//     {
//         p = par[p];
//         q = par[q];
//     }
//     cout << par[p] << "\n";
//     return 0;
// }