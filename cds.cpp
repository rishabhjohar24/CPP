#include <bits/stdc++.h>
#define ll long long
using namespace std;
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
void solve(int N, int K, vector<int> h)
{
    stack<pair<int, int>> s;
    vector<int> arr;
    for (int i = N - 1; i >= 0; i--)
    {
        if (s.empty())
        {
            arr[i] = -1;
        }
        else if (s.size() > 0 && h[i] < s.top().first)
        {
            arr[i] = -1;
        }
        else if (s.size() > 0 && s.top().first <= h[i])
        {
            pair<int, int> p;
            while (s.size() > 0 && s.top().first <= h[i])
            {
                p = s.top();
                s.pop();
            }
            if (s.empty())
            {
                arr[i] = -1;
            }
            else
            {
                arr[i] = i;
            }
        }
        s.push({h[i], i});
    }
    for (auto i : arr)
    {
        cout << i << "|\t";
    }
    return;
}
int main()
{
    ll n, val, k;
    cin >> n >> k;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    solve(n, k, arr);
    return 0;
}
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
