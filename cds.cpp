#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nk, j = 0;
    string k, s, e;
    cin >> k >> s;
    map<int, char> mp;
    for (int i = 0; i < 26; i++)
    {
        mp[i] = 97 + i;
        //cout << i << " " << mp[i] << "\n";
    }
    vector<int> ka(k.size());
    nk = k.size();
    vector<pair<int, int>> sa(s.size());
    for (int i = 0; i < k.size(); i++)
    {
        ka[i] = k[i] - 'a';
    }
    for (int i = 0; i < s.size(); i++)
    {
        int t = (s[i] - 'a' + (ka[j] % 25)) % 25;
        (!t) ? cout << s[i] : cout << mp[t];
        j++;
        j %= nk;
    }
    return 0;
}
// int main()
// {
//     int m, n, p;
//     cin >> m >> n >> p;
//     int ans = min(m, n);
//     if (ans <= p)
//     {
//         cout << ans;
//     }
//     else
//     {
//         ans = min(m, n);
//         m -= p;
//         n -= p;
//         ans = (max(m, n) >= 2 * ans) ? min(m, n) : p + m + n - 2 * ans;
//     }
//     cout << ans << "\n";
//     return 0;
// }

// string solve(vector<int> s, vector<int> t)
// {
//     int n = s.size(), m = t.size();
//     if (n != m)
//     {
//         return "NO";
//     }
//     map<int, int> smp;
//     for (int i = 0; i < n; i++)
//     {
//         smp[s[i]]++;
//     }
//     for (int i = 0; i < m; i++)
//     {
//         if (smp.find(t[i]) == smp.end())
//         {
//             smp[t[i]]++;
//         }
//         else
//         {
//             smp[t[i]]--;
//         }
//     }
//     for (auto i : smp)
//     {
//         if (abs(i.second) > 3)
//         {
//             return "NO";
//         }
//     }
//     return "YES";
// }
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<int> s(n), t(m);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> s[i];
//     }
//     for (int i = 0; i < m; i++)
//     {
//         cin >> t[i];
//     }
//     cout << solve(s, t);
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int rectCount(int n, int m)
// {
//     return (m * n * (n + 1) * (m + 1)) / 4;
// }

// /* driver code */
// int main()
// {
//     int n = 3, m = 2;
//     cout << rectCount(n, m);
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int SumOfUniqueElements(int *arr, int length);
// int main()
// {
//     int length;
//     cin >> length;
//     int *arr = new int[length];
//     for (int i = 0; i < length; i++)
//     {
//         cin >> arr[i];
//     }
//     int result = SumOfUniqueElements(arr, length);
//     cout << result << endl;
//     return 0;
// }
// int SumOfUniqueElements(int *arr, int length)
// {
//     int sum = 0;
//     map<int, int> s;
//     for (int i = 0; i < length; i++)
//     {
//         s[arr[i]]++;
//     }
//     for (auto i : s)
//     {
//         if (i.second == 1)
//         {
//             sum += i.first;
//         }
//     }
//     return sum;
// }
// int countSubarrays(vector<int> a, int n, int m)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int odd = 0;
//         for (int j = i; j < n; j++)
//         {
//             if (a[j] % 2)
//             {
//                 odd++;
//             }
//             if (odd == m)
//             {
//                 count++;
//             }
//         }
//     }
//     return count;
// }
// int main()
// {
//     int n, m, ans = 0;
//     cin >> n;
//     vector<int> arr(n, 0);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cin >> m;
//     for (int i = 0; i <= m; i++)
//     {
//         ans += countSubarrays(arr, n, m);
//     }
//     cout << ans << endl;
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int printMaxOfMin(vector<int> arr, int n, int x){
//     stack<int> s;
//     vector<int> left(n + 1, 0), right(n + 1, 0), ans(n + 1, 0);
//     for (int i = 0; i < n; i++){
//         left[i] = -1;
//         right[i] = n;
//     }
//     for (int i = 0; i < n; i++){
//         while (!s.empty() && arr[s.top()] >= arr[i]){
//             s.pop();
//         }
//         if (!s.empty()){
//             left[i] = s.top();
//         }
//         s.push(i);
//     }
//     while (!s.empty()){
//         s.pop();
//     }
//     for (int i = n - 1; i >= 0; i--){
//         while (!s.empty() && arr[s.top()] >= arr[i]){
//             s.pop();
//         }
//         if (!s.empty()){
//             right[i] = s.top();
//         }
//         s.push(i);
//     }
//     for (int i = 0; i < n; i++){
//         int len = right[i] - left[i] - 1;
//         ans[len] = max(ans[len], arr[i]);
//     }

//     for (int i = n - 1; i >= 1; i--){
//         ans[i] = max(ans[i], ans[i + 1]);
//     }
//     return ans[x];
// }
// int main()
// {
//     int n, x;
//     cin >> x >> n;
//     vector<int> arr(n, 0);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << printMaxOfMin(arr, n, x) << "\n";
//     return 0;
// }
// #include <bits/stdc++.h>

// using namespace std;

// int kLargest(int a[], int length, int k)
// {
//     set<int> s(a, a + length);
//     set<int>::iterator it = s.begin();
//     for (int i = 0; i < k - 1; i++)
//     {
//         it++;
//         cout << *it;
//     }
//     return *it;
// }

// int kSmallest(int a[], int length, int k)
// {
//     set<int> s(a, a + length);
//     set<int>::iterator it = s.end();
//     for (int i = 0; i < k - 1; i++)
//     {
//         it--;
//     }
//     return *it;
// }

// int main()
// {
//     int a[] = {43, 6, 7, 21, 35, 83, 57, 33};
//     int l = sizeof(a) / sizeof(a[0]);
//     int k = 4;
//     int kLarge = kLargest(a, l, k);
//     int kSmall = kSmallest(a, l, k);
//     cout << k << " th smallest number is:" << kLarge << endl;
//     cout << k << " th largest number is:" << kSmall << endl;
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> v1;
// void printKMax(vector<int> arr, int n, int k)
// {
//     std::deque<int> Qi(k);
//     int i;
//     for (i = 0; i < k; ++i)
//     {
//         while ((!Qi.empty()) && arr[i] >= arr[Qi.back()])
//             Qi.pop_back();
//         Qi.push_back(i);
//     }
//     for (; i < n; ++i)
//     {
//         v1.push_back(Qi.front());
//         while ((!Qi.empty()) && Qi.front() <= i - k)
//             Qi.pop_front();
//         while ((!Qi.empty()) && arr[i] >= arr[Qi.back()])
//             Qi.pop_back();
//         Qi.push_back(i);
//     }
//     v1.push_back(Qi.front());
// }
// int func(int n, int k, vector<int> wt, vector<int> taste)
// {
//     vector<int> v(n, 0);
//     int ans = INT_MIN;
//     v[n - 1] = taste[n - 1];
//     v[n - 2] += taste[n - 2] + v[n - 1];
//     int j = v1.size() - 1;
//     for (int i = n - 3; i >= 0; i--)
//     {
//         v[i] = taste[i];
//         int index = v1[j];
//         j--;
//         v[i] += v[index];
//         ans = max(v[i], ans);
//     }
//     return ans;
// }
// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     vector<int> wt, taste;
//     for (int i = 0; i < n; i++)
//     {
//         int a;
//         cin >> a;
//         wt.push_back(a);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         int a;
//         cin >> a;
//         taste.push_back(a);
//     }
//     printKMax(wt, n, k);
//     cout << func(n, k, wt, taste);
// }
// #include <bits/stdc++.h>
// using namespace std;

// // A Dequeue (Double ended queue) based
// // method for printing maximum element of
// // all subarrays of size k
// vector<int> printKMax(int arr[], int n, int k)
// {
//     vector<int> ans;
//     std::deque<int> Qi(k);
//     int i;
//     for (i = 1; i < k + 1; ++i)
//     {

//         while ((!Qi.empty()) && arr[i] >= arr[Qi.back()])
//             Qi.pop_back();
//         Qi.push_back(i);
//     }
//     for (; i < n; ++i)
//     {
//         ans.push_back(Qi.front());
//         while ((!Qi.empty()) && Qi.front() <= i - k)
//             Qi.pop_front();
//         while ((!Qi.empty()) && arr[i] >= arr[Qi.back()])
//             Qi.pop_back();
//         Qi.push_back(i);
//     }
//     ans.push_back(Qi.front());
//     return ans;
// }
// int main()
// {
//     int arr[] = {1, 5, 3, 4, 9};
//     int ts[] = {1, 2, 5, 3, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int k = 2, mx = 0, ans = 0;
//     vector<int> vec = printKMax(arr, n, k);
//     for (auto i : vec)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
//     for (int i = 0; i < n; i++)
//     {
//         ans = ts[i];
//         for (auto j : vec)
//         {
//             if (j > i)
//             {
//                 cout << ts[j] << " " << j << "\t";
//                 ans += ts[j];
//             }
//         }
//         cout << endl;
//         mx = max(ans, mx);
//     }
//     cout << mx;
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int solve(int n, int k, vector<int> wt, vector<int> ts)
// {
//     vector<int> dp(n, 0);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1, j = min(n, i + k + 1); j++)
//         {

//         }
//     }
// }
// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     vector<int> ts(n, 0), wt(n, 0);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> wt[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cin >> ts[i];
//     }
//     cout < solve(n, k, wt, ts);
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int func(int n, int k, vector<int> wt, vector<int> taste)
// {
//     vector<int> v(n, 0);
//     int ans = INT_MIN;
//     v[n - 1] = taste[n - 1];
//     for (int i = n - 2; i >= 0; i--)
//     {
//         v[i] = taste[i];
//         int index = i + 1, mx = wt[i + 1];
//         for (int j = i + 1; j < min(i + k + 1, n); j++)
//         {
//             if (wt[j] > mx)
//                 index = j, mx = v[j];
//         }
//         v[i] += v[index];
//         ans = max(v[i], ans);
//     }
//     // for (int i = 0; i < n; i++)
//     //     cout << v[i] << " ";
//     return ans;
// }
// int main()
// {
//     vector<int> wt, taste;
//     for (int i = 0; i < 10; i++)
//     {
//         int a;
//         cin >> a;
//         wt.push_back(a);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         int a;
//         cin >> a;
//         taste.push_back(a);
//     }
//     cout << func(10, 10, wt, taste);
// }
// #include <bits/stdc++.h>
// #define ll long long
// #define mod 1000000007
// using namespace std;
// int solve()
// int main()
// {
//     int n, k, mx = 0, ans = 0;
//     cin >> n >> k;
//     vector<int> ts(n, 0), wt(n, 0);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> ts[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cin >> wt[i];
//     }
//     for(int i = 0; i < n; i++){

//     }
//     return 0;
// }
// void solve(ll n, ll j, vector<ll> a, ll &flag, vector<ll> &dp)
// {
//     if (j < 0 || j >= n)
//     {
//         return;
//     }
//     if (flag)
//     {
//         return;
//     }
//     // if (dp[j])
//     // {
//     //     return;
//     // }
//     // dp[j] = 1;
//     if (a[j] == 0)
//     {
//         flag = 1;
//         return;
//     }
//     for (ll i = j; i < n && !flag; i++)
//     {
//         solve(n, j - a[i], a, flag, dp);
//         solve(n, j + a[i], a, flag, dp);
//     }
//     return;
// }
// int main()
// {
//     ll n, flag = 0, k;
//     cin >> n;
//     vector<ll> arr(n, 0), dp(n + 1, 0);
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cin >> k;
//     solve(n, k, arr, flag, dp);
//     if (flag)
//     {
//         cout << "True\n";
//     }
//     else
//     {
//         cout << "False\n";
//     }
//     return 0;
// }
// vector<ll> solve(ll n)
// {
//     vector<ll> arr(n + 1, 0);
//     arr[1] = 1;
//     arr[2] = 1;
//     arr[3] = 1;
//     for (ll i = 4; i <= n; i++)
//     {
//         for (ll j = 1; j < i; j++)
//         {
//             if (i % (j - i) == 0)
//             {
//                 arr[i] += arr[j] % mod;
//             }
//         }
//     }
//     return arr;
// }
// int main()
// {
//     ll t;
//     cin >> t;
//     vector<ll> a = solve(100000);
//     for (ll i = 0; i < t; i++)
//     {
//         ll n;
//         cin >> n;
//         cout << a[n] % mod << "\n";
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int k, flag = 0;
//     string s, mono, poly;
//     cin >> k >> s;
//     map<char, int> mp;
//     vector<int> val(26, 0);
//     vector<char> alp(26, 0);
//     for (int i = 0; i < 26; i++)
//     {
//         alp[i] = (char)(97 + i);
//     }
//     for (int i = 0; i < s.size(); i++)
//     {
//         mp[s[i]]++;
//     }
//     for (auto i : mp)
//     {
//         if (!(i.second % k))
//         {
//             val[i.first - 'a'] = i.second / k;
//         }
//         else
//         {
//             flag = 1;
//             poly = "-1";
//         }
//     }
//     for (int i = 0; i < 26 && !flag; i++)
//     {
//         if (val[i])
//         {
//             for (int j = 0; j < val[i]; j++)
//             {
//                 mono += alp[i];
//             }
//         }
//     }
//     for (int i = 0; i < k && !flag; i++)
//     {
//         poly += mono;
//     }
//     cout << poly << endl;
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// // Function to return maximum sum
// int maxPointCount(int arr[], int K, int size)
// {
//     // Initialize variables
//     int curr_points = 0;
//     int max_points = 0;

//     // Iterate over first K elements of array
//     // and update the value for curr_points
//     for (int i = 0; i < K; i++)
//         curr_points += arr[i];

//     // Update value for max_points
//     max_points = curr_points;

//     // j points to the end of the array
//     int j = size - 1;

//     for (int i = K - 1; i >= 0; i--)
//     {

//         curr_points = curr_points + arr[j] - arr[i];
//         max_points = max(curr_points,
//                          max_points);
//         j--;
//     }
//     return max_points;
// }
// int main()
// {
//     int arr[] = {8, 4, 4, 8, 12, 3, 2, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int K = n / 2, sum = 0;
//     accumulate(arr, arr + n, sum);
//     cout << maxPointCount(arr, K, n);
//     if (sum)
//         return 0;
// }
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// int isMotu(ll &motu, ll &patlu, ll l, ll r, ll turn, vector<ll> a)
// {
//     if (l > r)
//     {
//         return 0;
//     }
//     if (turn)
//     {
//         motu += max(a[l] + isMotu(motu, patlu, l + 1, r, turn ^ 1, a), a[r] + isMotu(motu, patlu, l, r - 1, turn ^ 1, a));
//     }
//     return (patlu += max(a[l] + isMotu(motu, patlu, l + 1, r, turn ^ 1, a), a[r] + isMotu(motu, patlu, l, r - 1, turn ^ 1, a)));
// }
// int main()
// {
//     ll n, motu = 0, patlu = 0;
//     cin >> n;
//     vector<ll> A(n, 0);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> A[i];
//     }
//     isMotu(motu, patlu, 0, n - 1, 0, A);
//     cout << motu;
//     (motu > patlu) ? cout << "True" : cout << "False";
//     return 0;
// }
// int main()
// {
//     ll n;
//     cin >> n;
//     vector<ll> ts(n, 0);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> ts[i];
//     }
//     cout << max_element(ts.begin(), ts.end()) - ts.begin() << " ";
// }
// void addedge(list<int> adj[], int v, int u)
// {
//     adj[v].push_back(u);
//     adj[u].push_back(v);
// }
// void DFS(list<int> adj[], int v, vector<bool> visit, int &count)
// {
//     if (visit[v] == true)
//     {
//         return;
//     }
//     count++;
//     visit[v] = true;
//     for (auto x : adj[v])
//     {
//         DFS(adj, x, visit, count);
//     }
// }
// vector<int> components(list<int> adj[], int n, int m)
// {
//     vector<bool> visit(n, false);
//     vector<int> tp;
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (!visit[i])
//         {
//             count = 0;
//             DFS(adj, i, visit, count);
//             tp.push_back(count);
//         }
//     }
//     return tp;
// }
// int solve(int n, int m, vector<vector<int>> arr, int x)
// {
//     list<int> adj[n];
//     vector<int> val;
//     for (int i = 0; i < m; i++)
//     {
//         addedge(adj, arr[i][0], arr[i][1]);
//     }
//     val = components(adj, n, m);
//     n = val.size();
//     vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= x; j++)
//         {
//             if (val[i - 1] <= j)
//             {
//                 dp[i][j] = max(val[i - 1] + dp[i - 1][j - val[i - 1]], dp[i - 1][j]);
//             }
//             else
//             {
//                 dp[i][j] = dp[i - 1][j];
//             }
//         }
//     }
//     return dp[n][x];
// }
// int main()
// {
//     int n, m, x, f, s;
//     cin >> n >> m >> x;
//     vector<vector<int>> arr(n, vector<int>(2, 0));
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     cout << solve(n, m, arr, x);
//     return 0;
// }
// void solve(int N, int K, vector<int> h)
// {
//     stack<pair<int, int>> s;
//     vector<int> arr;
//     for (int i = N - 1; i >= 0; i--)
//     {
//         if (s.empty())
//         {
//             arr[i] = -1;
//         }
//         else if (s.size() > 0 && h[i] < s.top().first)
//         {
//             arr[i] = -1;
//         }
//         else if (s.size() > 0 && s.top().first <= h[i])
//         {
//             pair<int, int> p;
//             while (s.size() > 0 && s.top().first <= h[i])
//             {
//                 p = s.top();
//                 s.pop();
//             }
//             if (s.empty())
//             {
//                 arr[i] = -1;
//             }
//             else
//             {
//                 arr[i] = i;
//             }
//         }
//         s.push({h[i], i});
//     }
//     for (auto i : arr)
//     {
//         cout << i << "|\t";
//     }
//     return;
// }
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main()
// {
//     ll n, mn = 0;
//     cin >> n;
//     while (n)
//     {
//         n = (n % 2) ? n - 1 : n / 2;
//         mn++;
//     }
//     cout << mn << "\n";
//     return 0;
// }
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// ll gcd(ll a, ll b)
// {
//     return (!b) ? a : gcd(b, a % b);
// }
// ll lcm(ll a, ll b)
// {
//     return (a / gcd(a, b)) * b;
// }
// int main()
// {
//     ll n, sum = 0;
//     cin >> n;
//     for (ll i = 1; i <= n; i++)
//     {
//         sum += pow(i, n - i) * lcm(i, n);
//     }
//     cout << sum << "\n";
//     return 0;
// }
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main()
// {
//     ll n, sum = 0;
//     cin >> n;
//     map<ll, ll> mp;
//     vector<ll> arr(n, 0);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         mp[arr[i]]++;
//     }
//     for (auto i : mp)
//     {
//         if (i.second == 1)
//         {
//             sum += i.first;
//         }
//     }
//     cout << sum << "\n";
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     float k;
//     cin >> n;
//     vector<int> arr(n, 0);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr.begin(), arr.end());
//     int a = 0, b = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         k = b + arr[i];
//         b = ceil(k / 2);
//     }
//     cout << b << "\n";
//     return 0;
// }
// int main()
// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         int n, ls = 0, rs = 0, flag = 1, ans = 0;
//         cin >> n;
//         map<int, int> mp, rt, lt;
//         vector<int> arr(n, 0), mat;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//             mp[arr[i]]++;
//             (i >= n / 2) ? rt[arr[i]]++ : lt[arr[i]]++;
//         }
//         for (auto i : mp)
//         {
//             if (i.second % 2)
//             {
//                 flag = 0;
//                 ans = -1;
//             }
//         }
//         for (int i = 0; i < n / 2 && flag; i++)
//         {
//             if (rt.find(arr[i]) != rt.end() && rt[arr[i]] > 0)
//             {
//                 rt[arr[i]]--;
//             }
//             else
//             {
//                 ls++;
//             }
//         }
//         for (int i = n / 2; i < n && flag; i++)
//         {
//             if (lt.find(arr[i]) != lt.end() && lt[arr[i]] > 0)
//             {
//                 lt[arr[i]]--;
//             }
//             else
//             {
//                 rs++;
//             }
//         }
//         if (ls == rs && ls != 0)
//         {
//             cout << ls / 2 << "\n";
//         }
//         else if (ans == -1)
//         {
//             cout << ans << "\n";
//         }
//         else
//         {
//             cout << abs(ls - rs) << "\n";
//         }
//     }
//     return 0;
// }

// int main(){
//     string str, ans = "";
//     cin>>str;
//     for(int i = 0; i < str.size(); i++){
//         if(str[i] == '7'){
//             continue;
//         }
//         else if(str[i] == 'G'){
//             continue;
//         }
//         else if(str[i] == '5'){
//             int j = i + 1;
//             if(j < str.size()){
//                 if(str[j] == '6'){
//                     i = j;
//                     continue;
//                 }
//             }
//         }
//         else if(str[i] == 'E'){
//             int j = i + 1;
//             if(j < str.size()){
//                 if(str[j] == 'F'){
//                     i = j;
//                     continue;
//                 }
//             }
//         }
//         ans += str[i];
//     }
//     cout<<ans<<endl;
//     return 0;
// }
// int main(){
//     int n, ans = -1;
//     cin>>n;
//     map<int, int>mp;
//     vector<int>arr(n, 0);
//     for(int i = 0; i < n; i++){
//         cin>>arr[i];
//         mp[arr[i]]++;
//     }
//     for(auto i : mp){
//         if(!(i.second % 2)){
//             ans = i.first;
//             break;
//         }
//     }
//     cout<<ans<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// void computeLPSArray(char* pat, int M, int* lps){
//     int len = 0;
//     lps[0] = 0;
//     int i = 1;
//     while (i < M) {
//         if (pat[i] == pat[len]) {
//             len++;
//             lps[i] = len;
//             i++;
//         }
//         else {
//             if (len != 0) {
//                 len = lps[len - 1];
//             }
//             else {
//                 lps[i] = 0;
//                 i++;
//             }
//         }
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     char pat[n];
//     int lps[n];
//     for(int i = 0; i < n; i++){
//         cin>>pat[i];
//     }
//     computeLPSArray(pat, n, lps);
//     for(int i = 0; i < n; i++){
//         cout<<pat[i]<<" "<<lps[i]<<"\n";
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// bool isValid(string s){
//     stack<char> st;
//     int n = s.size();
//     for(int i = 0; i < n; i++){
//         if(s[i] == '[' || s[i] == '{' || s[i] == '('){
//             st.push(s[i]);
//         }
//         else if((s[i] == '}' && st.top() == '{') || (s[i] == ')' && st.top() == '(') || (s[i] == ']' && st.top() == '[')){
//             st.pop();
//         }
//         else{
//             return false;
//         }
//     }
//     return (st.empty()) ? true : false;
// }
// int main(){
//     string s;
//     cin>>s;
//     (isValid(s)) ? cout<<"YES" : cout<<"NO";
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, ans = 0;
//     cin >> n;
//     if (n > 100)
//     {
//         cout << "Wrong Input\n";
//     }
//     else
//     {
//         while (n)
//         {
//             if (n & 1)
//             {
//                 ans++;
//             }
//             n >>= 1;
//         }
//         cout << ans << "\n";
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int dig[] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8};
// int lastNon0Digit(int n)
// {
//     if (n < 10)
//         return dig[n];
//     if (((n / 10) % 10) % 2 == 0)
//         return (6 * lastNon0Digit(n / 5) * dig[n % 10]) % 10;
//     else
//         return (4 * lastNon0Digit(n / 5) * dig[n % 10]) % 10;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << lastNon0Digit(n);
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// int h, m, hn, mn, step = 0;
// cin>>h>>m;
// cin>>hn>>mn;
// int dif1 = abs(60 - m) + mn;
// int dif2 = abs(mn - m);
// step = min(dif1, dif2);
// dif1 = abs(24 - h) + hn;
// dif2 = abs(hn - h);
// step += min(dif1, dif2);
// cout<<step;
// return 0;
//     string s;
//     cin >> s;
//     stack<char> st;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (st.empty())
//         {
//             st.push(s[i]);
//         }
//         else if (s[i] == '(')
//         {
//             st.push(s[i]);
//         }
//         else if (s[i] == ')' && st.top() == '(')
//         {
//             st.pop();
//         }
//         else
//         {
//             st.push(s[i]);
//         }
//     }
//     cout << st.size();
//     return 0;
// }
// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// int dp[input1][input3];
// for(int i = 0; i < n; i++){
//     for(int j = 0; j < k; j++){
//         dp[i][j] = 0;
//     }
// }
// dp[0][0] += 1;
// dp[0][input4[0] % input3] += 1;
// for(int i = 1; i < n; i++){
//     for(j = 0; j < k; j++){
//         dp[i][j] = dp[i - 1][j];
//     }
//     for(int j = 0; j < k; j++){
//         dp[i][(j + input4[i]) % input3] += dp[i - 1][j];
//     }
// }
// int main(){
// int n, edc, jdc, sum = 0, val = 0;
// cin>>n;
// map<int, int> mp;
// vector<int>ed(n, 0), john(n, 0);
// for(int i = 0; i < n; i++){
//     cin>>ed[i];
// }
// for(int i = 0; i < n; i++){
//     cin>>john[i];
// }
// cin>>edc>>jdc;
// vector<pair<int, int>>e, j;
// for(int i = 0; i < n; i++){
//     e.push_back({ed[i], i});
//     j.push_back({john[i], i});
// }
// sort(e.begin(), e.end());
// sort(j.begin(), j.end());
// int i = n - 1, k = n - 1;
// hile

// cout<<sum;
//     int cnt[input1 + 1];
//     int sum[input1 + 1];
//         sum[0] = 0;
//     memset(cnt, 0, sizeof cnt);
//     cnt[0] = 1;
//     for(int i = 1; i <= input1; i ++)
//     {
//         cin >> input4[i - 1];
//         sum[i] = (sum[i-1] + input4[i - 1]) % input3;
//         cnt[ sum[i] ] ++;
//     }

//     long long res = 0;
//     for(int r = 0; r < k; r ++)
//         res += (cnt[r]*(cnt[r]-1)/2);
//     cout << res << endl;
//     return 0;
// }
// for(int i = n - 1; i >= 0; i--){
//     if(j[i].second != e[i].second && edc > 0 && jdc > 0){
//         sum += j[i].first + e[i].first;
//         edc--;
//         jdc--;
//         val += 2;
//     }
//     else if(j[i].second == e[i].second && edc > 0 && jdc > 0){
//         sum += (j[i].first > e[i].first) ? j[i].first, jdc--: e[i].first, edc--;
//         val++;
//     }
//     else if(!edc){
//         while(jdc && val != n){
//             sum += j[i].first;
//             jdc--;
//             val++;
//         }
//         break;
//     }
//     else if(!jdc){
//         while(edc && val != n){
//             sum += e[i].first;
//             edc--;
//             val++;
//         }
//         break;
//     }
// }
