#include<bits/stdc++.h>
using namespace std;
bool isValid(int x, int y, int newc, int pervc, int n, int m){
    if(x < 0 || x >= n + 1|| y < 0 || y >= m + 1){
        return false;
    }
    return true;
}
void print(int arr[][8], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void floodFill(int arr[][8], int x, int y, int newc, int pervc, int n, int m){
    bool visit[n + 1][m + 1];
    memset(visit, false, sizeof(visit));
    arr[x][y] = newc;
    visit[x][y] = true;
    list <pair<int, int>> q;
    q.push_back({x, y});
    while(!q.empty()){
        pair <int, int> k = q.front();
        x = k.first;
        y = k.second;
        q.pop_front();
        if(isValid(x + 1, y, newc, pervc, n, m) && arr[x + 1][y] == pervc && visit[x + 1][y] == false){
            arr[x + 1][y] = newc;
            q.push_back({x + 1, y});
            visit[x + 1][y] = true;
        }
        if(isValid(x - 1, y, newc, pervc, n, m) && arr[x - 1][y] == pervc && visit[x - 1][y] == false){
            arr[x - 1][y] = newc;
            q.push_back({x - 1, y});
            visit[x - 1][y] = true;
        }
        if(isValid(x, y + 1, newc, pervc, n, m) && arr[x][y + 1] == pervc && visit[x][y + 1] == false){
            arr[x][y + 1] = newc;
            q.push_back({x, y + 1});
            visit[x][y + 1] = true;
        }
        if(isValid(x, y - 1, newc, pervc, n, m) && arr[x][y - 1] == pervc && visit[x][y - 1] == false){
            arr[x][y - 1] = newc;
            q.push_back({x, y - 1});
            visit[x][y - 1] = true;
        }
    }
    print(arr, n, m);
}
int main(){
    // vector<vector<int>> arr;
    // vector<int> b;
    int n, m, var, newc, pervc, x, y;
    cin>>n>>m>>x>>y>>newc;
    int arr[8][8] = {
    { 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 0, 0, 1, 1, 0, 1, 1 },
    { 1, 2, 2, 2, 2, 0, 1, 0 },
    { 1, 1, 1, 2, 2, 0, 1, 0 },
    { 1, 1, 1, 2, 2, 2, 2, 0 },
    { 1, 1, 1, 1, 1, 2, 1, 1 },
    { 1, 1, 1, 1, 1, 2, 2, 1 },
  };
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         cin>>var;
    //         b.push_back(var);
    //     }
    //     arr.push_back(b);
    //     b.clear();
    // }
    pervc = arr[x][y];
    floodFill(arr, x, y, newc, pervc, n, m);
    return 0;
}