#include <bits/stdc++.h>
using namespace std;
int countDecodingDP(char *input1)
{
  int n = strlen(input1);
  int count[n + 1];
  count[0] = 1;
  count[1] = 1;
  if (input1[0] == '0')
    return 0;
  for (int i = 2; i <= n; i++)
  {
    count[i] = 0;
    if (input1[i - 1] > '0')
    {
      count[i] = count[i - 1];
    }
    if (input1[i - 2] == '1' || (input1[i - 2] == '2' && input1[i - 1] < '7'))
    {
      count[i] += count[i - 2];
    }
  }
  return count[n];
}

// Driver program to test above function
int main()
{
  char input1[] = "121";
  int n = strlen(input1);
  cout << "Count is " << countDecodingDP(input1);
  return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// int computeDays(int input1, int input2, int input3[])
// {
//   int n = input1;
//   int x = input2;
//   sort(input3, input3 + n);
//   int days = 0;
//   for (int i = 0; i < n; i++)
//   {
//     while (x < input3[i])
//       x <<= 1, days++;
//     if (x <= (input3[i] << 1))
//       x = input3[i] << 1;
//     days++;
//   }
//   return days;
// }
// int main()
// {
//   return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int z(double sales, double wk)
// {
//   double phr = 5, sp;
//   if (sales < 10000)
//   {
//     sp = 150;
//   }
//   else if (sales < 50000)
//   {
//     sp = 750;
//   }
//   else
//   {
//     sp = double(2 * (double)(sales / 100));
//   }
//   return (phr * wk) + sp;
// }
// int main()
// {
//   cout << z(60000, 20);
// }
// #include <bits/stdc++.h>
// using namespace std;

// // A recursive binary search function. It returns
// // location of x in given array arr[l..r] is present,
// // otherwise -1
// int binarySearch(int arr[], int l, int r, int x)
// {
//   if (r >= l)
//   {
//     int mid = l + (r - l) / 2;

//     // If the element is present at the middle
//     // itself
//     if (arr[mid] == x)
//       return mid;

//     // If element is smaller than mid, then
//     // it can only be present in left subarray
//     if (arr[mid] > x)
//     {
//       cout << arr[mid];
//       return binarySearch(arr, l, mid - 1, x);
//     }

//     // Else the element can only be present
//     // in right subarray
//     cout << arr[mid] << " ";
//     return binarySearch(arr, mid + 1, r, x);
//   }

//   // We reach here when element is not
//   // present in array
//   return -1;
// }

// int main(void)
// {
//   int arr[] = {20, 30, 38, 47, 48, 49, 51, 67, 73, 75, 78, 84, 89, 92, 98};
//   int x = 89;
//   int n = sizeof(arr) / sizeof(arr[0]);
//   int result = binarySearch(arr, 0, n - 1, x);
//   // (result == -1)
//   // ? cout << "Element is not present in array"
//   // : cout << "Element is present at index " << result;
//   return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// #define V 4

// // implementation of traveling Salesman Problem
// int travllingSalesmanProblem(int graph[][V], int s)
// {
//   // store all vertex apart from source vertex
//   vector<int> vertex;
//   for (int i = 0; i < V; i++)
//     if (i != s)
//       vertex.push_back(i);

//   // store minimum weight Hamiltonian Cycle.
//   int min_path = INT_MAX;
//   do
//   {

//     // store current Path weight(cost)
//     int current_pathweight = 0;

//     // compute current path weight
//     int k = s;
//     for (int i = 0; i < vertex.size(); i++)
//     {
//       current_pathweight += graph[k][vertex[i]];
//       k = vertex[i];
//     }
//     current_pathweight += graph[k][s];

//     // update minimum
//     min_path = min(min_path, current_pathweight);

//   } while (
//       next_permutation(vertex.begin(), vertex.end()));

//   return min_path;
// }

// // Driver Code
// int main()
// {
//   // matrix representation of graph
//   int graph[][V] = {{0, 5, 10, 7},
//                     {6, 0, 11, 5},
//                     {8, 5, 0, 6},
//                     {9, 4, 11, 0}};
//   int s = 0;
//   cout << travllingSalesmanProblem(graph, s) << endl;
//   return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// long dist(pair<long, long> p1, pair<long, long> p2)
// {
//   long x0 = p1.first - p2.first;
//   long y0 = p1.second - p2.second;
//   return x0 * x0 + y0 * y0;
// }
// double maxTime(int input1, int input2, int **input3)
// {
//   double Max = 0;
//   for (int i = 0; i < input2; i++)
//   {
//     pair<int, int> x = {input3[i][0], input3[i][1]};
//     for (int j = i + 1; j < input2; j++)
//     {
//       pair<int, int> y = {input3[j][0], input3[j][1]};
//       Max = max(Max, (double)dist(x, y));
//     }
//   }
//   return sqrt(Max) / input1;
// }
// int main()
// {
//   int n, sp;
//   cin >> n >> sp;
//   int arr[n][2];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i][0] >> arr[i][1];
//   }
//   cout << maxTime(sp, n, arr);
//   return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// struct Node
// {
//   int data;
//   Node *left;
//   Node *right;
//   Node(int val)
//   {
//     left = NULL;
//     right = NULL;
//     data = val;
//   }
// };
// int main()
// {
//   vector<int> arr{1, 2, 3};
//   int brr[] = {1, 2, 3, 4, 5};
//   solve(arr, *brr);
//   return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// void Solve(vector<vector<int>> arr)
// {
//   int n = arr.size();
//   unordered_map<int, int> ans;
//   for (int i = 0; i < arr[0].size(); i++)
//   {
//     ans.insert({arr[0][i], 1});
//   }
//   for (int i = 1; i < n; i++)
//   {
//     unordered_map<int, int> local;
//     for (int j = 0; j < arr[i].size(); j++)
//     {
//       if (ans.find(arr[i][j]) != ans.end())
//       {
//         local.insert({arr[i][j], 1});
//       }
//     }
//     ans = local;
//   }
//   for (auto i : ans)
//   {
//     cout << i.first << " ";
//   }
// }
// int main()
// {
//   int n, m;
//   cin >> n >> m;
//   vector<vector<int>> arr(n, vector<int>(m, 0));
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < m; j++)
//     {
//       cin >> arr[i][j];
//     }
//   }
//   Solve(arr);
//   return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int DFS(int node, vector<int> adj[])
// {
//   int mx = INT_MIN, timer = 1;
//   for (auto i : adj[node])
//   {
//   }
//   return mx;
// }
// int main()
// {
//   int n, m, flag = 0, timer = 1, mx = INT_MIN;
//   cin >> n >> m;
//   vector<int> adj[n];
//   for (int i = 0; i < n - 1; i++)
//   {
//     int a, b;
//     cin >> a >> b;
//     adj[a].push_back(b);
//   }
//   return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int maxLength(string s)
// {
//   if (s.length() <= 1)
//     return 0;
//   int curMax = 0;
//   vector<int> longest(s.size(), 0);
//   for (int i = 1; i < s.length(); i++)
//   {
//     if (s[i] == ')' && i - longest[i - 1] - 1 >= 0 && s[i - longest[i - 1] - 1] == '(')
//     {
//       longest[i] = longest[i - 1] + 2 + ((i - longest[i - 1] - 2 >= 0) ? longest[i - longest[i - 1] - 2] : 0);
//       curMax = max(longest[i], curMax);
//     }
//   }
//   return curMax;
// }
// int main()
// {
//   int t;
//   cin >> t;
//   while (t--)
//   {
//     string S;
//     cin >> S;
//     maxLength(S);
//   }
//   return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int longestSubstring(string s, int n)
// {
//   map<int, int> index;
//   int answer = 0;
//   int mask = 0;
//   index[mask] = -1;
//   for (int i = 0; i < n; i++)
//   {
//     int temp = (int)s[i] - 97;
//     mask ^= (1 << temp);
//     if (index[mask])
//     {
//       answer = max(answer, i - index[mask]);
//     }
//     else
//     {
//       index[mask] = i;
//     }
//     for (int j = 0; j < 26; j++)
//     {
//       int mask2 = mask ^ (1 << j);
//       if (index[mask2])
//       {
//         answer = max(answer, i - index[mask2]);
//       }
//     }
//   }
//   return answer;
// }
// int main()
// {
//   string s;
//   cin >> s;
//   int n = s.size();
//   cout << longestSubstring(s, n) << "\n";
//   return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   using ll = long long;
//   int n, m, q;
//   cin >> n;
//   vector<vector<ll>> arr(n + 1, vector<ll>(n + 1, INT64_MAX));
//   for (int i = 0; i < n; i++)
//   {
//     int a, b, c;
//     cin >> a >> b >> c;
//     arr[i][a] = c;
//     arr[b][a] = c;
//   }
//   for (int k = 1; k <= n; k++)
//   {
//     for (int i = 1; i <= n; i++)
//     {
//       for (int j = i + 1; j <= n; j++)
//       {
//         if ((arr[i][j] > arr[i][k] + arr[k][j]))
//         {
//           arr[i][j] = arr[i][k] + arr[k][j];
//         }
//       }
//     }
//   }
//   while (q--)
//   {
//     int a, b;
//     cin >> a >> b;
//     if (a == b)
//     {
//       arr[a][b] = 0;
//     }
//     if (arr[a][b] == INT64_MAX)
//     {
//       arr[a][b] = -1;
//     }
//     cout << arr[a][b] << "\n";
//   }
//   return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int divideArray(int arr[], int n, int k, int i)
// {
//   vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));
//   for (int i = n - 1; i >= 0; i--)
//   {
//     for (int j = 0; j <= k; j++)
//     {
//     }
//   }
// }

// Driver code
// int main()
// {
//   int arr[] = {2, 9, 5, 4, 8, 3, 6};
//   int n = sizeof(arr) / sizeof(int);
//   int k = 2;

//   cout << divideArray(arr, n, k, 0) << "\n";

//   return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int first(int arr[], int x, int n)
// {
//   int low = 0, high = n - 1, res = -1;
//   while (low <= high)
//   {
//     int mid = (low + high) / 2;
//     if (arr[mid] > x)
//       high = mid - 1;
//     else if (arr[mid] < x)
//       low = mid + 1;
//     else
//     {
//       res = mid;
//       high = mid - 1;
//     }
//   }
//   return res;
// }
// void fun(vector<int> arr)
// {
//   int n = arr.size();
//   map<int, int> mp;
//   for (int i = 0; i < n; i++)
//   {
//     mp[arr[i]]++;
//   }
// }
// int main()
// {
//   int n;
//   vector<int> arr(n);
//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }
//   fun(arr);
//   return 0;
// }
// #include <bits/stdc++.h>
// #define f first
// #define s second
// using namespace std;
// int main(){
//   int n, k;
//   set<int> visit;
//   queue<pair<int, int>> q;
//   cin >> n >> k;
//   q.push({n, 0});
//   while (!q.empty()){
//     int a = q.front().f, b = q.front().s, flag = 0;
//     q.pop();
//     visit.insert(a);
//     if(a == k){
//        cout<<b<<endl;
//        break;
//     }
//     if (a + a == k || a - a == k || a / a == k || a * a == k){
//       cout << b + 1 << endl;
//       break;
//     }
//     if (visit.find(a + a) == visit.end()){
//       q.push({a + a, b + 1});
//     }
//     else{
//       flag += 1;
//     }
//     if (visit.find(a - a) == visit.end()){
//       q.push({a - a, b + 1});
//     }
//     else{
//       flag += 1;
//     }
//     if (visit.find(a * a) == visit.end()){
//       q.push({a * a, b + 1});
//     }
//     else{
//       flag += 1;
//     }
//     if (visit.find(a * a) == visit.end()){
//       q.push({a * a, b + 1});
//     }
//     else{
//       flag += 1;
//     }
//     if (flag == 4){
//       cout << -1 << endl;
//       break;
//     }
//   }
//   return 0;
// }
// int main()
// {
//   int n, x, pos = 0, neg;
//   cin >> n;
//   map<int, int> m;
//   for (int i = 0; i < n; i++)
//   {
//     cin >> x;
//     m[x]++;
//   }
//   for (auto i : m)
//   {
//     if (i.second == 1)
//     {
//       pos += abs(i.first);
//     }
//   }
//   cout << pos;
//   return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int x, n, k; //prev;
//   cin >> n >> k;
//   map<int, int> mp;
//   vector<int> par(n + 1, -1), ans(n + 1, -1);
//   for (int i = 1; i <= n; i++)
//   {
//     cin >> x;
//     par[i] = x;
//   }
//   for (int i = 0; i < k; i++)
//   {
//     cin >> x;
//     int prev;
//     while (par[x] != -1)
//     {
//       prev = x;
//       x = par[prev];
//     }
//     par[prev] = -1;
//     ans[prev] = 0;
//   }
//   for (int i = 1; i <= n; i++)
//   {
//     if (ans[i] == -1)
//     {
//       cout << i << " ";
//     }
//   }
//   return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int maxEnergy(vector<vector<int>> mat)
// {
//   vector<vector<int>> dp(5, vector<int>(5, 0));
//   for (int i = 0; i < 4; i++)
//   {
//     dp[3][i] = mat[3][i];
//   }
//   for (int i = 2; i >= 0; i--)
//   {
//     for (int j = 0; j < 4; j++)
//     {
//       int max = INT_MAX;
//       if (((j - 1) >= 0) && (max > dp[i + 1][j - 1]))
//         max = dp[i + 1][j - 1];
//       if (((j + 1) < 4) && (max > dp[i + 1][j + 1]))
//         max = dp[i + 1][j + 1];
//       if (j < 4 && max > dp[i + 1][j])
//         max = dp[i + 1][j];
//       dp[i][j] = mat[i][j] + max;
//     }
//   }
//   int mn = INT_MAX;
//   for (int i = 0; i < 4; i++)
//   {
//     mn = min(mn, dp[0][i]);
//   }
//   return 100 - mn;
// }
// int main()
// {
//   int n;
//   cin >> n;
//   vector<vector<int>> arr(n, vector<int>(n, 0));
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       cin >> arr[i][j];
//     }
//   }
//   cout << maxEnergy(arr);
//   return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int maxSum(vector<vector<int>> mat)
// {
//   int n = 2;
//   int dp[n][n];
//   int maxSum = INT_MIN, max;
//   for (int j = 0; j < n; j++)
//   {
//     dp[n - 1][j] = mat[n - 1][j];
//   }
//   for (int i = n - 2; i >= 0; i--)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       max = INT_MAX;
//       if (((j - 1) >= 0) && (max > dp[i + 1][j - 1]))
//       {
//         max = dp[i + 1][j - 1];
//       }
//       if (((j + 1) < n) && (max > dp[i + 1][j + 1]))
//       {
//         max = dp[i + 1][j + 1];
//       }
//       dp[i][j] = mat[i][j] + max;
//     }
//   }
//   for (int j = 0; j < n; j++)
//     if (maxSum < dp[0][j])
//     {
//       maxSum = dp[0][j];
//     }
//   return maxSum;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int t;
//   cin >> t;
//   while (t--)
//   {
//     int n, shake = 0, cnt = 0;
//     cin >> n;
//     priority_queue<pair<int, char>> arr;
//     for (int i = 0; i < n; i++)
//     {
//       int a, b;
//       cin >> a >> b;
//       arr.push({a, 'x'});
//       arr.push({b, 'y'});
//     }
//     while (!arr.empty())
//     {
//       cnt += (arr.top().second == 'x') ? 1 : -1;
//       shake = max(shake, cnt);
//       arr.pop();
//     }
//     (shake *= (shake - 1)) /= 2;
//     cout << shake << endl;
//   }
//   return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// bool comps(tuple<string, int, int> a, tuple<string, int, int> b)
// {
//   return get<0>(a) < get<0>(b);
// }
// bool comp1(tuple<string, int, int> a, tuple<string, int, int> b)
// {
//   return get<1>(a) < get<1>(b);
// }
// bool comp2(tuple<string, int, int> a, tuple<string, int, int> b)
// {
//   return get<2>(a) < get<2>(b);
// }
// vector<string> fetchItemsToDisplay(int numOfItems, map<string, pair<int, int>> items, int sortParameter, int sortOrder, int itemsPerPage, int pageNumber)
// {
//   int j = 0;
//   vector<string> ans;
//   vector<tuple<string, int, int>> arr(numOfItems);
//   for (auto i : items)
//   {
//     arr[j] = {i.first, i.second.first, i.second.second};
//     j++;
//   }
//   if (!sortParameter)
//   {
//     sort(arr.begin(), arr.end(), comps);
//   }
//   else if (sortParameter == 1)
//   {
//     sort(arr.begin(), arr.end(), comp1);
//   }
//   else
//   {
//     sort(arr.begin(), arr.end(), comp2);
//   }
//   if (sortOrder)
//   {
//     reverse(arr.begin(), arr.end());
//   }
//   j = 0;
//   for (int i = 0; i < numOfItems; i += itemsPerPage)
//   {
//     if (j == pageNumber)
//     {
//       for (j = i; j < min(i + itemsPerPage, numOfItems); j++)
//       {
//         ans.push_back(get<0>(arr[j]));
//       }
//       break;
//     }
//     j++;
//   }
//   return ans;
//}
// vector<string> fetchItemsToDisplay(int numOfItems, map<string, pair<int, int>> items, int sortParameter, int sortOrder, int itemsPerPage, int pageNumber)
// {
//   vector<string> str;
//   int j = 0;
//   if (sortParameter == 0)
//   {
//     vector<pair<string, pair<int, int>>> arr(numOfItems);
//     for (auto i : items)
//     {
//       arr[j] = {i.first, {i.second.first, i.second.second}};
//       j++;
//     }
//     sort(arr.begin(), arr.end());
//     if (sortOrder)
//     {
//       reverse(arr.begin(), arr.end());
//     }
//     j = 0;
//     for (int i = 0; i < numOfItems; i += itemsPerPage)
//     {
//       if (j == pageNumber)
//       {
//         for (int k = i; k < min(i + itemsPerPage, numOfItems); k++)
//         {
//           str.push_back(arr[k].first);
//         }
//         break;
//       }
//       j++;
//     }
//   }
//   else if (sortParameter == 1)
//   {
//     vector<pair<int, pair<string, int>>> arr(numOfItems);
//     for (auto i : items)
//     {
//       arr[j] = {i.second.first, {i.first, i.second.second}};
//       j++;
//     }
//     sort(arr.begin(), arr.end());
//     if (sortOrder)
//     {
//       reverse(arr.begin(), arr.end());
//     }
//     j = 0;
//     for (int i = 0; i < numOfItems; i += itemsPerPage)
//     {
//       if (j == pageNumber)
//       {
//         for (int k = i; k < min(i + itemsPerPage, numOfItems); k++)
//         {
//           str.push_back(arr[k].second.first);
//         }
//         break;
//       }
//       j++;
//     }
//   }
//   else
//   {
//     vector<pair<int, pair<string, int>>> arr(numOfItems);
//     for (auto i : items)
//     {
//       arr[j] = {i.second.second, {i.first, i.second.first}};
//       j++;
//     }
//     sort(arr.begin(), arr.end());
//     if (sortOrder)
//     {
//       reverse(arr.begin(), arr.end());
//     }
//     j = 0;
//     for (int i = 0; i < numOfItems; i += itemsPerPage)
//     {
//       if (j == pageNumber)
//       {
//         for (int k = i; k < min(i + itemsPerPage, numOfItems); k++)
//         {
//           str.push_back(arr[k].second.first);
//         }
//         break;
//       }
//       j++;
//     }
//   }
//   return str;
// }
// int main()
// {
//   int n;
//   cin >> n;
//   map<string, pair<int, int>> arr;
//   for (int i = 0; i < n; i++)
//   {
//     string a;
//     int b, c;
//     cin >> a >> b >> c;
//     arr.insert({a, {b, c}});
//   }
//   int sortParameter;
//   int sortOrder;
//   int itemsPerPage;
//   int pageNumber;
//   cin >> sortParameter >> sortOrder >> itemsPerPage >> pageNumber;
//   vector<string> s = fetchItemsToDisplay(n, arr, sortParameter, sortOrder, itemsPerPage, pageNumber);
//   for (auto i : s)
//   {
//     cout << i << " ";
//   }
//   return 0;
// }
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// bool comp(pair<long, long> a, pair<long, long> b)
// {
//   double r1 = (double)a.second / (double)a.first;
//   double r2 = (double)b.second / (double)b.first;
//   return r1 > r2;
// }
// long getMaxUntil(int num, vector<int> boxes, int unitSize, vector<int> unitPerBox, long truckSize)
// {
//   vector<pair<long, long>> arr(num);
//   for (int i = 0; i < num; i++)
//   {
//     arr[i] = {boxes[i], boxes[i] * unitPerBox[i]};
//   }
//   sort(arr.begin(), arr.end(), comp);
//   long currw = 0;
//   long double finalv = 0.0;
//   for (int i = 0; i < num; i++)
//   {
//     if (currw + arr[i].first <= truckSize)
//     {
//       currw += arr[i].first;
//       finalv += arr[i].second;
//     }
//     else
//     {
//       long double remain = truckSize - currw;
//       finalv += arr[i].second * ((long double)remain / (long double)arr[i].first);
//       break;
//     }
//   }
//   return finalv;
// }
// int main()
// {
//   ll n, unitsize, trucksize;
//   cin >> n;
//   vector<int> boxes(n);
//   for (ll i = 0; i < n; i++)
//   {
//     cin >> boxes[i];
//   }
//   cin >> unitsize;
//   vector<int> unitsperbox(unitsize);
//   for (int i = 0; i < unitsize; i++)
//   {
//     cin >> unitsperbox[i];
//   }
//   cin >> trucksize;
//   cout << getMaxUntil(n, boxes, unitsize, unitsperbox, trucksize);
//   return 0;
// }
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main()
// {
//     int n, x;
//     cin >> n >> x;
//     vector<int> arr(n);
//     vector<pair<int, int>> s(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         s[i] = {arr[i], i};
//     }
//     x -= 30;
//     sort(s.begin(), s.end());
//     int l = 0, r = n - 1, flag = 1;
//     pair<int, int> p;
//     p = {0, 1};
//     if (s[0].first + s[1].first > x)
//     {
//         p = {-1, -1};
//         flag = 0;
//     }
//     while (l < r && flag == 1)
//     {
//         int t = s[l].first + s[r].first;
//         int pq = s[p.first].first + s[p.second].first;
//         if (x < t)
//         {
//             if (pq < t)
//             {
//                 p = {s[l].second, s[r].second};
//             }
//             r--;
//         }
//         else if (x > t)
//         {
//             if (pq < t)
//             {
//                 p = {s[l].second, s[r].second};
//             }
//             l++;
//         }
//         else
//         {
//             p = {s[l].second, s[r].second};
//             break;
//         }
//     }
//     if (p.first > p.second)
//     {
//         swap(p.first, p.second);
//     }
//     cout << p.first << " " << p.second;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// bool comp(pair<int, int> a, pair<int, int> b)
// {
//     if (a.first == b.first)
//     {
//         return a.second > b.second;
//     }
//     return a.first < b.first;
// }
// int fun(int p, vector<int> x, vector<int> y)
// {
//     int n = x.size(), count = 0, temp = p;
//     vector<pair<int, int>> arr(n);
//     vector<bool> seen(n, 0);
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = {x[i], y[i]};
//     }
//     sort(arr.begin(), arr.end(), comp);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             if (temp >= arr[j].first && !seen[j])
//             {
//                 seen[j] = 1;
//                 temp += arr[j].second;
//             }
//         }
//     }
//     for (auto i : seen)
//     {
//         count += (i) ? 1 : 0;
//     }
//     return count;
// }
// int main()
// {
//     int n, p;
//     cin >> n >> p;
//     vector<int> x(n), y(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cin >> y[i];
//     }
//     cout << fun(p, x, y);
//     return 0;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     vector<char> arr(n, ' '), ans_char;
//     vector<int> ans_int;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int count = 1;
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i - 1] == arr[i])
//         {
//             count++;
//         }
//         else
//         {
//             if (count > 1)
//             {
//                 ans_char.push_back(arr[i - 1]);
//                 ans_int.push_back(count);
//             }
//             else
//             {
//                 ans_char.push_back(arr[i - 1]);
//             }
//             count = 1;
//         }
//     }
//     if (count > 1)
//     {
//         ans_char.push_back(arr[n - 1]);
//         ans_int.push_back(count);
//     }
//     else
//     {
//         ans_char.push_back(arr[n - 1]);
//     }
//     cout << ans_char.size() + ans_int.size() << endl;
//     return 0;
// }
// int solve(vector<vector<int>> arr, int x, int p)
// {
//     int n = arr.size();
//     int ans = INT_MAX;
//     if (p == n)
//     {
//         return 0;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (i != x)
//         {
//             ans = min(ans, arr[p][i] + solve(arr, i, p + 1));
//         }
//     }
//     return ans;
// }
// ll solve(vector<ll> arr, ll n, ll val, ll x)
// {
//     if (x == n)
//     {
//         return 0;
//     }
//     ll ans = 0;
//     for (ll i = x; i < n; i++)
//     {
//         if (arr[i] == val && val == 2)
//         {
//             ans = 1 + min(solve(arr, n, 1, i + 1), solve(arr, n, 3, i + 1));
//             break;
//         }
//         if (arr[i] == val && val == 1)
//         {
//             ans = 1 + min(solve(arr, n, 2, i + 1), solve(arr, n, 3, i + 1));
//             break;
//         }
//         if (arr[i] == val && val == 3)
//         {
//             ans = 1 + min(solve(arr, n, 1, i + 1), solve(arr, n, 2, i + 1));
//             break;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     ll n;
//     cin >> n;
//     vector<ll> arr(n, 0);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << solve(arr, n, 2, 0);
//     return 0;
// }
// int main()
// {
//     int n, m, k, x, j = 0;
//     cin >> n >> m >> k >> x;
//     string arr[m], str, o;
//     cin >> str;
//     for (int i = 0; i < m; i++)
//     {
//         cin >> o;
//         sort(o.begin(), o.end());
//         arr[i] = o;
//     }
//     sort(arr, arr + m);
//     for (int i = 0; i < n; i++)
//     {
//         if (str[i] == '#')
//         {
//             str[i] = arr[j][0];
//             arr[j] = arr[j].substr(1, arr[j].length() - 1);
//             j++;
//             if (j == m)
//             {
//                 sort(arr, arr + m);
//                 j %= m;
//             }
//         }
//     }
//     cout << str << endl;
//     return 0;
// }
// int main()
// {
//     string s, a, b, sorted;
//     int n;
//     cin >> s;
//     sorted = s;
//     n = s.size();
//     sort(sorted.begin(), sorted.end());
//     for (int i = 0; i < n; i++)
//     {
//         a += s[i];
//         if (a.back() == sorted[0])
//         {
//         }
//     }
//     return 0;
// }
// int main()
// {
//     int n, k, lsum = 0, msum = 0, ans = 0;
//     cin >> n >> k;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {`
//         cin >> arr[i];
//         if (i < k)
//         {
//             lsum += arr[i];
//         }
//     }
//     ans = 0;
//     msum = lsum;
//     for (int i = k; i < n; i++)
//     {
//         lsum += arr[i] - arr[i - k];
//         if (lsum > msum)
//         {
//             msum = lsum;
//             ans = i - k + 1;
//         }
//     }
//     cout << ans + 1 << endl;
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int nk, j = 0;
//     string k, s, e;
//     cin >> k >> s;
//     map<int, char> mp;
//     for (int i = 0; i < 26; i++)
//     {
//         mp[i] = 97 + i;
//         //cout << i << " " << mp[i] << "\n";
//     }
//     vector<int> ka(k.size());
//     nk = k.size();
//     vector<pair<int, int>> sa(s.size());
//     for (int i = 0; i < k.size(); i++)
//     {
//         ka[i] = k[i] - 'a';
//     }
//     for (int i = 0; i < s.size(); i++)
//     {
//         int t = (s[i] - 'a' + (ka[j] % 25)) % 25;
//         (!t) ? cout << s[i] : cout << mp[t];
//         j++;
//         j %= nk;
//     }
//     return 0;
// }
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
