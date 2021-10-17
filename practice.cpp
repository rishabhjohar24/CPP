// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> a;
//     for(int i = 1; i <= n; i++){
//         int k = i;
//         while(k <= n){
//             int t = k;
//             a.push_back(t);
//             t *= 10;
//             for(int j = 0; j <= 9 && t < n; j++){
//                 a.push_back(t);
//                 t++;
//             }
//             k *= 10;
//         }
//     }
//     for(int i = 0; i < a.size(); i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }
// int visit[201][201];
// bool isValid(int n, int m, int x, int y, vector<vector<int>>& v){
//     if(x < 0 || y < 0 || x >= n || y >= m || visit[x][y] || !v[x][y]){
//         return false;
//     }
//     return true;
// }
// int dx[] = {-1, 0, 1, 0};
// int dy[] = {0, 1, 0, -1};
// int DFS(int n, int m, int x, int y, vector<vector<int>> & v){
//     int k = 1;
//     visit[x][y] = 1;
//     for(int i = 0; i < 4; i++){
//         if(isValid(n, m, x + dx[i], y + dy[i], v)){
//             k += DFS(n, m, x + dx[i], y + dy[i], v);
//         }
//     }
//     return k;
// }
// int solve(vector<vector<int>>& v) {
//     int gmax = -1, lmax = 0;
//     for(int i = 0; i < v.size(); i++){
//         for(int j = 0; j < v[0].size(); j++){
//             if(!visit[i][j] && v[i][j]){
//                 lmax = DFS(v.size(), v[0].size(), i, j, v);
//                 int p = sqrt(lmax);
//                 gmax = max(gmax, p);
//             }
//         }
//     }
//     if(gmax == -1){
//         return 0;
//     }
//     return gmax*gmax;
// }