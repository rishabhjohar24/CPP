#include<bits/stdc++.h>
using namespace std;
int vec[1001][1001];
bool visit[1001][1001] = {false};
bool isValid(int n, int m, int x, int y){
    if(x <= 0 || x > n || y > m || y <= 0){
        return false;
    }
    if(visit[x][y] || !vec[x][y]){
        return false;
    }
    return true;
}
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
void DFS(int n, int m, int x, int y){
    visit[x][y] = true;
    for(int i = 0; i < 4; i++){
        if(isValid(n, m, x + dx[i], y + dy[i])){
            DFS(n, m, x + dx[i], y + dy[i]);
        }
    }
}
int main(){
    memset(visit, false, sizeof(visit));
    memset(vec, 0, sizeof(vec));
    int n, m, val;
    cin>>n>>m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin>>vec[i][j];
        }
    }
    val = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(!visit[i][j] && vec[i][j]){
                val++;
                DFS(n, m, i, j);
            }
        }
    }
    cout<<val;
    return 0;
}