#include<bits/stdc++.h>
#define ll long long int
#define vv vector<vector<ll>>
#define vec vector<ll>
#define pb push_back
#define fori(t, k) for(ll i = t; i < k; i++)
#define forj(t, k) for(ll j = t; j < k; j++)
using namespace std;
bool isValid(ll x, ll y, vv visit, vv arr, ll N, ll M){
    if(x < 0 || y < 0 || x >= N || y >= M || visit[x][y] || !arr[x][y]){
        return false;
    }
    return true;
}
ll dy[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
ll dx[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
void Islands(ll x, ll y, vv &visit, vv arr, ll N, ll M){
    visit[x][y] = 1;
    fori(0, 8){
        ll newx = x + dx[i];
        ll newy = y + dy[i];
        if(isValid(newx, newy, visit, arr, N, M)){
            Islands(newx, newy, visit, arr, N, M);
        }
    }
}
int main(){
    ll n, m, val;
    cin>>n>>m;
    vec b;
    vv arr, visit(n, vec(m , 0));
    fori(0, n){
        forj(0, m){
            cin>>val;
            b.pb(val);
        }
        arr.pb(b);
        b.clear();
        val = 0;
    }    
    ll ans = 0;
    fori(0, n){
        forj(0, m){
            if(!visit[i][j] && arr[i][j]){
                Islands(i, j, visit, arr, n, m);
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}