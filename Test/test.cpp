#include <bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define vi vector<int>
#define mod 1000000007
using namespace std;
int main()
{
    for (int k : {0, 1, 2})
    {
        cout << k << " ";
    }
    return 0;
}
// int main()
// {
//     int n, val;
//     cin >> n;
//     set<int> k;
//     for (auto i = 0; i < n; i++)
//     {
//         cin >> val;
//         k.insert(val);
//     }
//     for (auto i : k)
//     {
//         cout << i << " ";
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// #define ll long long int
// #define mp make_pair
// #define pb push_back
// #define vi vector<int>
// #define mod 1000000007
// using namespace std;
// int main() {
//     string s;
//     cin>>s;
//     s[2] = '1';
//     cout<<s;
//     return 0;
// int t;
// cin >> t;
// while (t--){
//     int n;
//     cin >> n;
//     int t[n+1][6];
//     int a[6];
//     for(int i=0;i<6;i++) a[i] = INT_MAX;
//     for(int i=1;i<=n;i++) {
//         for(int j=1;j<6;j++) {
//             cin >> t[i][j];
//         }
//     }
//     int index;
//     for(int i=1;i<6;i++) {
//         for(int j=1;j<=n;j++) {
//             if(a[i] > t[j][i]) a[i] = t[j][i],index = j;
//         }
//         a[i] = index;
//     }
//    int res = -1,maxcnt=0;
//    for(int i=1;i<6;i++) {
//        int cnt=1;
//        for(int j=1;j<6;j++) {
//            if(a[i] == a[j] && i != j) cnt++;
//        }
//        if(maxcnt == cnt) {
//            res =-1;
//            break;
//        }
//        else if(maxcnt < cnt) maxcnt = cnt,res = i;
//    }

//     cout << res << "\n";
// }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int a;
// 	cin>>a;
// 	a /= 2;
// 	cout<<a;
// 	return 0;
// } // namespace std;

// // { Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// struct Node
// {
// 	char data;
// 	struct Node *left;
// 	struct Node *right;

// 	Node(char x) {
// 		data = x;
// 		left = NULL;
// 		right = NULL;
// 	}
// };

// struct Node* buildTree(string str)
// {
// 	// Corner Case
// 	if (str.length() == 0 || str[0] == 'N')
// 		return NULL;

// 	// Creating vector of strings from input
// 	// string after spliting by space
// 	vector<string> ip;

// 	istringstream iss(str);
// 	for (string str; iss >> str; )
// 		ip.push_back(str);

// 	// Create the root of the tree
// 	Node *root = new Node(stoi(ip[0]));

// 	// Push the root to the queue
// 	queue<Node*> queue;
// 	queue.push(root);

// 	// Starting from the second element
// 	int i = 1;
// 	while (!queue.empty() && i < ip.size()) {

// 		// Get and remove the front of the queue
// 		Node* currNode = queue.front();
// 		queue.pop();

// 		// Get the current node's value from the string
// 		string currVal = ip[i];

// 		// If the left child is not null
// 		if (currVal != "N") {

// 			// Create the left child for the current Node
// 			currNode->left = new Node(stoi(currVal));

// 			// Push it to the queue
// 			queue.push(currNode->left);
// 		}

// 		// For the right child
// 		i++;
// 		if (i >= ip.size())
// 			break;
// 		currVal = ip[i];

// 		// If the right child is not null
// 		if (currVal != "N") {

// 			// Create the right child for the current node
// 			currNode->right = new Node(stoi(currVal));

// 			// Push it to the queue
// 			queue.push(currNode->right);
// 		}
// 		i++;
// 	}

// 	return root;
// }
// class Solution {
//   public:
//     /*This function returns true if the tree contains
//     a duplicate subtree of size 2 or more else returns false*/
//     string check(Node* root, map<string , int>& a){
//         if(!root){
//             return "$";
//         }
//         string s;
//         s += to_string(root->data);
//         s += check(root->left, a);
//         s += check(root->right, a);
//         a[s]++;
//         return s;
//     }
//     int dupSub(Node *root) {
//         map<string, int> a;
//         check(root, a);
//         int flag = 1;
//         for(auto i : a){
//             if(i.second > 1){
//                 return 1;
//             }
//         }
//         return 0;
//     }
// };
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n = 1;
//     while(n){
//         if(n > INT_MAX){
//             cout<<"Yes";
//             break;
//         }
//         n*=2;
//     }
//     return 0;
// }
// void digit(int n, int start, string out, set<string>&s){
//     if(!n){
//         cout<<out<<" ";
//         s.insert(out);
//         return;
//     }
//     for(int i = start; i <= 9; i++){
//         string str = out + to_string(i);
//         digit(n - 1, i + 1, str, s);
//     }
// }
// // int solve(int n) {

// //     return s.size();
// // }
// int main(){
//     int n;
//     cin>>n;
//     set<string> s;
//     while(n){
//         digit(n, 0, "", s);
//         n--;
//     }
//     cout<<s.size();
//     return 0;
// }
// #include <ctype.h>
// #include <stdio.h>

// int main()
// {
//     char ch = '/';

//     // checking is it alphanumeric or not?
//     if (isalnum(ch))
//         printf("\nEntered character is alphanumeric\n");
//     else
//         printf("\nEntered character is not alphanumeric\n");
// }
// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     map<long long, int> a;
//     long long p = 2;
//     while(p < 1e18){
//         a.insert({p, 1});
//         p *= 2;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// string binary(int n){
//     string s;
//     while(n > 0){
//         if(n & 1){
//             s += '1';
//         }
//         else{
//             s += '0';
//         }
//         n >>= 1;
//     }
//     return s;
// }
// int main(){
//     int n;
//     cin>>n;

//     cout<<binary(n);
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int i;
//     cin>>i;
//     i = i + NULL;
//     cout<<i;
//     return 0;
// }
// int LCS(vector<vector<int>>& x, int a, int b){
//     int n = x[a].size(), m = x[b].size(), gmax = 0;
//     int t[n + 1][m + 1];
//     for(int i = 0; i <= n; i++){
//         for(int j = 0; j <= m; j++){
//             if(i == 0 || j == 0){
//                 t[i][j] = 0;
//             }
//             else if(x[a][i - 1] == x[b][j - 1]){
//                 t[i][j] = 1 + t[i - 1][j - 1];
//                 gmax = max(gmax, t[i][j]);
//             }
//         }
//     }
//     return gmax;
// }
// void print(vector<vector<int>>& a, int p){

//     for(int i = 0; i < a[p].size(); i++){
//         cout<<a[p][i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int n, m;
//     cin>>n>>m;
//     vector<vector<int>> a;
//     vector<int>k;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             int t;
//             cin>>t;
//             k.push_back(t);
//         }
//         a.push_back(k);
//         k.clear();
//     }
//     int lmax = 0, gmax = -1;
//     for(int i = 0; i < n; i++){
//         for(int j = i + 1; j < n; j++){
//             lmax = LCS(a, i, j);
//             gmax = max(gmax, lmax);
//         }
//     }
//     cout<<gmax;
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// vector <string> a;
// int k = 0;
// void maker(int n, char x){
//     if(n == 0){
//         return;
//     }
//     string str;
//     for(char i = 'a'; i < 'z'; i++){
//         str = x + i;
//         a.push_back(str);
//     }
// }
// void print(){
//     for(auto i : a){
//         cout<<i<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     maker(n);
//     print();
//     return 0;
// }
// int bijli(int arr[],int n)
// {
//     int ccnt = 0, ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 1 && ccnt % 2 == 0)
//         {
//             continue;
//         }
//         else if(arr[i] == 0 && ccnt % 2 != 0){
//             continue;
//         }
//         else if (arr[i] == 1 && ccnt % 2 != 0)
//         {
//             ans++;
//             ccnt++;
//         }
//         else if (arr[i] == 0 && ccnt % 2 == 0)
//         {
//             ans++;
//             ccnt++;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin>>arr[i];
//     }
//     cout << bijli(arr ,n)<<endl;
//     return 0;
// }
// int main(){
//     int arr [5];
//     for(int i = 0; i < 5; i++){
//         arr[i] = i;
//     }
//     for(int i = 0; i < n; i++){
//         cout<<arr[i - 1]<<" ";
//         co
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i = 0; i < t; i++){
//         int n;
//         cin>>n;
//         int arr[n], temp[n - 1];
//         for(int i = 0; i < n; i++){
//             cin>>arr[i];
//         }
//         for(int i = 1; i < n; i++){
//             temp[i - 1] = (arr[i] - arr[i - 1]);
//         }
//         for(int i = 0; i < n - 1; i++){
//             cout<<temp[i]<<" ";
//         }
//         int lmax = 1, gmax = 1;
//         for(int i = 0; i < n - 1; i++){
//             while(temp[0] == temp[i]){
//                 lmax++;
//                 i++;
//             }
//             if(t)
//             gmax = max(lmax, gmax);
//         }
//         cout<<"Case #"<<i+1<<": "<<gmax + 1<<endl;
//     }
//     return 0;
// }
// int main()
// {
//     int n,maxx=0;
//     cin >> n;
//     int a[n];
//     for(int i=0;i<n;i++) cin >> a[i];
//     for(int i=0;i<n;i++) {
//         int temp=a[i],kp = a[i];
//         if(a[i] == 0){
//             continue;
//         }
//         for(int j=i+1;j<n;j++) {
//             if(a[j]%kp == 0) {
//                 temp +=a[j];
//                 kp = a[j];
//             }
//         }
//         maxx = max(maxx,temp);
//     }
//     cout << maxx << "\n";
// }
// #include <bits/stdc++.h>
// using namespace std;
// const q = 2000;
// int solve(int n,int m,int a,int b,int arr[][q]){
//     if(n==0 && m==0){
//         return 0;
//     }
//     if((n==1 && m==0) || (n==0 && m==1) || (n==1 & m==1)){
//         return min(a,b);
//     }
//     int row=0,col=0;
//     for(int i=0;i<m;i++){
//         if(arr[n-1][i]){
//             row++;
//             break;
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i][m-1]){
//             col++;
//             break;
//         }
//     }
//     if(row==0){
//         return solve(n-1,m,a,b,arr);
//     }
//     else if(col==0){
//         return solve(n,m-1,a,b,arr);
//     }
//     else {
//         if(min(a,b)==a){
//             return solve(n-1,m,a,b,arr);
//         }
//         else{
//             return solve(n,m-1,a,b,arr);
//         }
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;
//     int a;
//     cin>>a;
//     int b;
//     cin>>b;
//     int arr[n][m];
//     solve(n,m,a,b,arr);
//     return 0;
// }
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<string>
// #include<set>
// #include<unordered_set>
// #include<map>
// #include<unordered_map>
// #include <bits/stdc++.h>
// #include <stdint.h>
// #include <stdio.h>
// using namespace std;
// #define ll long long int
// const ll MOD = 1e9 + 7;
// int main(){
//     cout<<1125899906842624 % MOD;
//     return 0;
// }
// #define ll long long int
// const ll MOD = 1e9 + 7;
// ll powerLL(ll x, ll n)
// {
//     ll result = 1;
//     while (n) {
//         if (n & 1)
//             result = result * x % MOD;
//         n = n / 2;
//         x = x * x % MOD;
//     }
//     return result;
// }

// int main()
// {
//     int sa, sb;
//     cin>>sa>>sb;

//     cout << powerLL(sa, sb / 2) << endl;
//     return 0;
// }
// void print_2_pow_n(int n) {
//     int i, j, blen = n / 32 + 1, dlen = n / 29 + 1;
//     uint32_t bin[blen], dec[dlen];
//     uint64_t num;

//     for (i = 0; i < blen; i++)
//         bin[i] = 0;
//     bin[n / 32] = (uint32_t)1 << (n % 32);

//     for (j = 0; blen > 0; ) {
//         for (num = 0, i = blen; i-- > 0;) {
//             num = (num << 32) | bin[i];
//             bin[i] = num / 1000000000;
//             num = num % 1000000000;
//         }
//         dec[j++] = (uint32_t)num;
//         while (blen > 0 && bin[blen - 1] == 0)
//             blen--;
//     }
//     printf("2^%d = %u", n, dec[--j]);
//     while (j-- > 0)
//         printf("%09u", dec[j]);
//     printf("\n");
// }

// int main() {
//     int i;
//     for (i = 0; i <= 100; i += 5)
//         print_2_pow_n(i);
//     print_2_pow_n(1000);
//     print_2_pow_n(10000);
//     print_2_pow_n(100000);
//     return 0;
// }

// using namespace std;

// string Ans(long N,long x,long k){
//     for(long j=0;j<N+2;){
//         if(j==x){
//             return "Yes";
//         }
//         j+=k;
//     }
//     for(long j=N+1;j>=0;){
//         if(j==x){
//             return "Yes";
//         }
//         j-=k;
//     }
//     return "No";
// }

// int main()
// {
// ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int T;
//     cin>>T;
//     for(int i=0;i<T;i++){
//         long N,x,k;
//         cin>>N>>x>>k;
//         string ans=Ans(N,x,k);
//         cout<<ans<<"\n";
//     }
//     return 0;
// }
// int main(){
//     int n = 10;
//     for(int i = 0; i < n;){
//         cout<<i<<" ";
//         i++;
//     }
//     return 0;
// }
// int main(){
//     string s;
//     unordered_set <char> seen;
//     cin>>s;
//     for(int i = 0; i < s.size(); i++){
//         seen.insert(s[i]);
//     }
//     for(auto i : seen){
//         cout<<i<<" ";
//     }
//     return 0;
// }

// int main(){
//     int n, cost, limit, loop_len, tcost;
//     cin>>n>>cost;
//     tcost = n - 1;
//     vector <int> A;
//     for(int i = 0; i < n; i++){
//         A.push_back(i + 1);
//     }
//     limit = ((n * (n + 1)) / 2) - 1;
//     loop_len = limit - n;
//     int temp, left = 0, right = n, j = n - 1, flag = 0;
//     for(int i = 0; i < limit; i++){
//         if(cost + 1 == tcost){
//             break;
//         }
//         if(j == left && flag == 0){
//             reverse(A.begin() + left + 1, A.begin() + right);
//             right--;
//             flag = 1;
//         }
//         if(flag == 0){
//             temp = A[j];
//             A[j] = A[j - 1];
//             A[j - 1] = temp;
//             j--;
//         }
//         if(j == right - 1 && flag == 1){
//             reverse(A.begin() + left, A.begin() + right - 1);
//             left++;
//             flag = 0;
//         }
//         if(flag == 1){
//             temp = A[j];
//             A[j] = A[j + 1];
//             A[j + 1] = temp;
//             j++;
//         }
//         for(int i = 0; i < n; i++){
//             cout<<A[i]<<" ";
//         }
//         cout<<"Cost : "<<tcost<<endl;
//         tcost++;
//     }
//     return 0;
// }

// int main(){
//     int n, counter;
//     cin>>n>>counter;
//     vector <int> A;
//     for(int i = 0; i < n; i++){
//         int val;
//         A.push_back(i + 1);
//     }
//     int lflag = 0, li = 0, lj = 0, k = 1;
//     //lfag = local flag, li = local i,
//     //lj = local j
//     for(int i = 0; i < n; i++){
//         cout<<A[i]<<" ";
//     }
//     cout<<endl;
//     while(counter >= 0){
//         if(lflag == 0){
//             reverse(A.begin() + li, A.begin() + n - lj);
//             lflag = 1;
//             lj++;
//         }
//         else if(lflag == 1){
//             reverse(A.begin() + li, A.begin() + n - lj);
//             lflag = 0;
//             li++;
//         }
//         counter--;
//         for(int i = 0; i < n; i++){
//         cout<<A[i]<<" ";
//         }
//         cout<<endl<<endl;;
//         cout<<"li-> "<<li<<"  "<<"lj-> "<< n - lj<<endl<<endl;
//     }
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     string arr[n + 1];
//     for(int i = 1; i < n + 1; i++){
//         cin>>arr[i];
//     }
//     sort(arr + 1, arr + 5);
//     for(int i = 1; i < n + 1; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// int main(){
//     int n;
//     vector<pair<int, bool>> A;
//     cin>>n;
//     A.push_back(make_pair(n, true));
//     cout<<A[0].first<<" "<<A[0].second<<endl;
//     A[0].second = false;
//     cout<<A[0].first<<" "<<A[0].second;
//     return 0;
// }
// int main(){
//     for(int i = 0; i < 10; i++){
//         cout<<i;
//         int j = 1;
//         while(j == 1){
//             i = 5;
//             j--;
//         }
//         cout<<i;
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     float x, y, x1, x2, y1, y2, m, c;
//     cin>>x1>>x2>>y1>>y2;
//     m = (y2 - y1) / (x2 - x1);
//     c = (x1 * y2 - x2 * y1) / (x1 - x2);
//     cout<<"Y = "<<m<<"X";
//     if(c > 0.00){
//         cout<<" + "<<c;
//     }
//     else if(c < 0.00){
//         cout<<" - "<<abs(c);
//     }
//     return 0;
// }
// int main(){
//     // int n, p;
//     // cin>>n;
//     // for(int i = 6; i > 0; i--){

//     // }
//     float x;
//     cin>>x;
//     cout<< x / 2;
//     // long long a, b, c, d, e, f, g;
//     // g = INT_MAX;
//     // a = 23*6 ;
//     // b = (23*22*23*5)/2 ;
//     // c = (23*22*23*21*22*4)/(2*2) ;
//     // d = (23*22*23*21*22*20*21*3)/(2*2*2) ;
//     // e = (23*22*23*21*22*20*21*20*19*2)/(2*2*2*2) ;
//     // f = (23*22*23*21*22*20*21*20*19*18*19*1)/(2*2*2*2*2);
//     // cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl<<f<<endl<<g;
//     return 0;
// }

// int main(){
//     int temp, n;
//     cin>>n;
//     int arr[n];
//     vector<pair<int, int>> a;
//     for(int i = 0; i < n; i++){
//         cin>>arr[i];
//         a.push_back(make_pair(arr[i], i));
//     }
//     sort(a.begin(), a.end());
//     for(int i = 0; i < n; i++){
//         cout<<a[i].first<<" "<<a[i].second<<endl;
//     }
//     return 0;
// }
// int main(){
//     int n;
//     long t;
//     n = INT_MAX;
//     t = INT_MAX;
//     cout<<n<<endl<<t;
//     return 0;
// }

// int main(){
//     // int n, i = 0;
//     char n;
//     cin>>n;/
//     // int arr[n] = {};
//     // while(n--){
//     //     cout<<arr[i]<<" ";
//     //     i++;
//     // }
//     cout<<(int)n;
//     return 0;
// }

// int main(){
//     bool arr[3][3];
//     memset(arr, true, sizeof(arr));
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string A = "A";
//     int i =  (string)A;
//     cout<<i;
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     unordered_set <string> s;
//     string t;
//     for(int i = 0; i < 4; i++){
//         cin>>t;
//         s.insert(t);
//     }
//     unordered_set <string>:: iterator it;
//     for(it = s.begin(); it != s.end(); it++){
//         t = *it;
//         cout<<t[1]<<" ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string a, b, s;
//     cin>>a>>b;
//     s = a + b;
//     // char c[8];
//     // for(int i = 0; i < 8; i++){
//     //     cin>>c[i];
//     //     s = s + c[i];
//     // }
//     // for(int i = 0; i < 8; i++){
//     //     cout<<c[i]<<" ";
//     // }
//     // string temp, flag;
//     // temp = s.substr(0, 2);
//     // flag = s.substr(3, 2);
//     // cout<<temp<<flag;
//     cout<<s.length();
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     char a;
//     cin>>a;
//     cout<<(int)a;
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<pair<int, int>> v;
//     for(int i = 0; i < 4; i++){
//         int a;
//         cin>>a;
//         v.push_back(make_pair(a, i));
//     }
//     sort(v.begin(), v.end());
//     for(int i = 0; i < 4; i++){
//         cout<<v[i].first<<" "<<v[i].second<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s, time;
//      cin>>s;
//     // s[0] = NULL;
//     // cin>>time;

//     // cout<<s.length();
//            string temp = s;
//             string temp1 = temp.substr(0, 2);
//             string temp3 = temp.substr(3, 3);
//              string temp2 = temp.substr(5, 7);
//             // if(temp1 < time){
//             //     cout<<"1";
//             // }
//             // else{
//             //     cout<<"0";
//             // }
//             cout<<temp1<<endl<<temp3<<endl;
//             cout<<temp2;

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int temp;
//     vector <int> v;
//     vector <int> ::iterator it;
//     for(int i = 0; i < 5; i++){
//         cin>>temp;
//         v.push_back(temp);
//     }
//     cin>>temp;
//     it = find(v.begin(), v.end() ,temp);
//     cout<<*it;
//     return 0;
// }
//This is how we declare Array containing zeroes
// #include<stdio.h>
// int main()
// {
// int num;
// printf("\nEnter a number:");
// scanf("%d",&num);
// num=num & 1;
// if(num==0)
// printf("\nNumber is Even");
// else
// printf("\nNumber is Odd");
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector <int> A(n);
//     for(int i = 0; i < n; i++){
//         cin>>A[i];
//     }
//     for(int i = 0; i < n; i++){
//         cout<<A[i]<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int b, temp = 0, n, d;
//     cin>>n>>b;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//             temp = temp*10 + 1;
//     }
//     temp = b + temp;
//         for(int i = n-1; i >= 0 ; i--){
//             arr[i] = temp % 10;
//             temp = temp / 10;
//         }
//         for(int i = 0; i < n-1; i++){
//             if(arr[i] == arr[i + 1]){
//                 arr[i + 1] = arr[i + 1] - 1;
//             }
//         }
//         temp = 0;
//         for(int i = 0; i < n; i++){
//             temp = temp*10 + arr[i];
//     }
//     d = temp - b;
//     cout<<d;
//     return 0;
// }

// int main(){
//     string a[2];
//     cin>>a[0]>>a[1];
//     for(int i = 0; i < 2; i++){
//         string x = a[i];
//         for(int j = 0; j < x.length(); j++){
//             cout<<x[j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n][n] ={};
//     for(int i=0; i<n; i++){
//         for (int j=0; j<n; j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
//  using namespace std;
//  int main(){
//     //  int a,b,temp;
//     //  cin>>a>>b;
//     //  temp=a/b;
//      cout<<"HELLO";
//      return 0;
//  }