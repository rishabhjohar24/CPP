#include<iostream>
#include<cstring>
#include<queue>
#include<time.h>
using namespace std;
int vec[1001][1001] = {{0}}, dist[1001][1001] = {{0}};
bool visit[1001][1001] = {{false}};
int dx[] = {-1, 0, 1, 0, -1, -1, 1, 1};
int dy[] = {0, 1, 0, -1, -1, 1, 1, -1};
bool isValid(int n, int m, int x, int y){
    if(x < 1 || y < 1 || x > n || y > m || visit[x][y]){
        return false;
    }
    return true;
}
void print(int n, int m){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }
}
void BFS(int n, int m, int x, int y){
    queue<pair<int, int>> q;
    q.push({x, y});
    visit[x][y] = true;
    dist[x][y] = 0;
    while (!q.empty()){
        int currx = q.front().first;
        int curry = q.front().second;
        q.pop();
        for(int i = 0; i < 8; i++){
            int newx = currx + dx[i];
            int newy = curry + dy[i];
            if(isValid(n, m, newx, newy)){
                visit[newx][newy] = true;
                dist[newx][newy] = dist[currx][curry] + 1;
                q.push({newx, newy});
            }
        }
    }
    print(n, m);   
}
int main(){
    srand(time(0));
    memset(visit, false, sizeof(false));
    memset(dist, 0, sizeof(dist));
    memset(vec, 0, sizeof(vec));
    int n, m;
    cin>>n>>m;
    BFS(n, m, 0, 0);
    return 0;
}