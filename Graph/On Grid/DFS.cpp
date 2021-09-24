#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> vec;
vector<int> temp;
bool visit[10001][10001] = {false};
bool isValid(int n, int m, int x, int y){
    if(x <= 0 || x >= n + 1|| y <= 0 || y >= m + 1 || visit[x][y] || !vec[x][y]){
        return false;
    }
    return true;
}
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
void DFS(int n, int m , int x, int y){
    visit[x][y] = true;
    cout<<x<<" "<<y<<endl;
    for(int i = 0; i < 4; i++){
        if(isValid(n, m, x + dx[i], y + dy[i]))
        DFS(n, m, x + dx[i], y + dy[i]);
    }
}
// void DFS(int n, int m, int x, int y){
//     visit[x][y] = true;
//     cout<<x<<" "<<y<<endl;
//     if(isValid(n, m, x + 1, y)){
//         DFS(n , m, x + 1, y);
//     }
//     if(isValid(n, m, x - 1, y)){
//         DFS(n , m, x - 1, y);
//     }
//     if(isValid(n, m, x, y + 1)){
//         DFS(n , m, x, y + 1);
//     }
//     if(isValid(n, m, x, y - 1)){
//         DFS(n , m, x, y - 1);
//     }
// }
int main(){
    int n, m, var;
    cin>>n>>m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>var;
            temp.push_back(var);
        }
        vec.push_back(temp);
        temp.clear();
    }
    DFS(n, m, 1, 1);
    return 0; 
}