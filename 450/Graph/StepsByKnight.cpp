#include<bits/stdc++.h>
using namespace std;
bool isValid(int x, int y, int N){
    if(x >= 1 && x <= N && y <= N && y >= 1){
        return true;
    }
    return false;
}
int minStep(pair<int, int> knight, pair <int, int> target, int n){
    int x = knight.first, y = knight.second, moves = 0;
    int xmove[] = {-2, -1, 1, 2, 2, 1, -1, -2};
    int ymove[] = {-1, -2, -2, -1, 1, 2, 2, 1};
    bool visit[n + 1][n + 1];
    memset(visit, false, sizeof(visit));
    visit[x][y] = true;
    queue <pair <pair<int, int>, int>> q;
    pair <pair<int, int>, int> k;
    k = make_pair(make_pair(x, y), moves);
    q.push(k);
    while(!q.empty()){
        k = q.front();
        int p = k.first.first;
        int r = k.first.second;
        moves = k.second;
        q.pop();
        if(p == target.first && r == target.second){
            return moves;
        }
        for(int i = 0; i < 8; i++){
            x = p + xmove[i];
            y = r + ymove[i];
            if(isValid(x, y, n) && !visit[x][y]){
                visit[x][y] = true;
                k = make_pair(make_pair(x, y), moves + 1);
                q.push(k);
            }
        }
    }
    return -1;
}
int main(){
    pair <int, int> knight, target;
    int a, b, n;
    cout<<"Size Of Board : ";
    cin>>n;
    cout<<"Position of Knight : \n";
    cin>>a>>b;
    knight.first = a;
    knight.second = b;
    cout<<"Position of Target : \n";
    cin>>a>>b;
    target.first = a;
    target.second = b;
    cout<<minStep(knight, target, n);
    return 0;
}