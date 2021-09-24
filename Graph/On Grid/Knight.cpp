#include<bits/stdc++.h>
using namespace std;
map <char, int> x;
int chess[1001][1001] = {{0}};
int dist[1001][1001] = {{0}};
bool visit[1001][1001] = {{false}};
int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};
bool isValid(int x, int y){
    if(x < 1 || y < 1 || x > 8 || y > 8 || visit[x][y]){
        return false;
    }
    return true;
}
void print(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }
}
void create(){
    int j = 1;
    for(char i = 'a'; i <= 'h'; i++){
        x.insert({i, j});
        j++;
    }
}
int val(char p){
    for(auto i : x){
        if(i.first == p){
            return i.second;
        }
    }
    return 0;
}
void minMoves(int x, int y){
    queue<pair<int, int>> q;
    q.push({x, y});
    visit[x][y] = true;
    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for(int i = 0; i < 8; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(isValid(nx, ny)){
                dist[nx][ny] = 1 + dist[x][y];
                visit[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
    // print(8);
}
int main(){
    string a, b;
    int sx, sy, ex, ey;
    cin>>a>>b;
    create();
    sx = val(a[0]);
    sy = a[1] - '0';
    ex = val(b[0]);
    ey = b[1] - '0';
    minMoves(sx, sy);
    cout<<dist[ex][ey];
    return 0;
}