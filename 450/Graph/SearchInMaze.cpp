#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
bool visit[1001][1001];
ll dx[] = {1, -1, 0, 0};
ll dy[] = {0, 0, 1, -1};
bool isValid(ll x, ll y, ll N, vector<vector<ll>> A){
    if(x >= 0 && x <= N - 1 && y <= N - 1 && y >= 0 && A[x][y] && !visit[x][y]){
        return true;
    }
    return false;
}
void Way(ll x, ll y, vector<vector<ll>>A, ll n, vector<string>& S, string& path){
    if(!isValid(x, y, n, A)){
        return;
    }
    if(x == n - 1 && y == n - 1){
        reverse(path.begin(), path.end());
        S.pb(path);
        return;
    }
    visit[x][y] = true;
    for(int i = 0; i < 4; i++){
        ll newx = x + dx[i];
        ll newy = y + dy[i];
        if(isValid(newx, newy, n, A)){
            if(i == 0) path += 'D';
            else if(i == 1) path += 'U';
            else if(i == 2) path += 'R';
            else path += 'L';
            Way(newx, newy, A, n, S, path);
            path.pop_back();
        }
    }
    visit[x][y] = false;
}
int main(){
    vector<vector<ll>> A;
    vector<ll> B;
    vector<string>path;
    string S;
    ll n, val;
    cin>>n;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            cin>>val;
            B.pb(val);
        }
        A.pb(B);
        B.clear();
    }
    Way(0, 0, A, n, path, S);
    for(int i = 0; i < path.size(); i++){
        cout<<path[i]<<"\n";
    }
    return 0;
}