#include<iostream>
#include<cstring>
#include<queue>
#include<time.h>
using namespace std;
char vec[31][31] = {{}}; 
int dist[31][31] = {{0}};
bool visit[31][31] = {{false}};
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
bool isValid(int n, int x, int y){
    if(x < 1 || y < 1 || x > n || y > n || visit[x][y] || vec[x][y] == 'T'){
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
void BFS(int n, int sx, int sy){
    queue<pair<int, int>> q;
    q.push({sx, sy});
    visit[sx][sy] = true;
    dist[sx][sy] = 0;
    while (!q.empty()){
        int currx = q.front().first;
        int curry = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int newx = currx + dx[i];
            int newy = curry + dy[i];
            if(isValid(n, newx, newy)){
                visit[newx][newy] = true;
                dist[newx][newy] = dist[currx][curry] + 1;
                q.push({newx, newy});
            }
        }
    }  
}
int main(){
    srand(time(0));
    memset(visit, false, sizeof(false));
    memset(dist, 0, sizeof(dist));
    memset(vec, 0, sizeof(vec));
    int n, sx, sy, ex, ey;
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin>>vec[i][j];
            if(vec[i][j] == 'S'){
                sx = i;
                sy = j;
            }
            if(vec[i][j] == 'E'){
                ex = i;
                ey = j;
            }
        }
    }
    BFS(n, sx, sy);
    cout<<dist[ex][ey];
    return 0;
}