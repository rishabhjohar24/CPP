#include<bits/stdc++.h>
#define ll long long int
#define vv(t) vector<vector<t>>
#define v(t) vector<t>
#define ls(t) list<t>
#define q(t) queue<t>
#define pb push_back
#define mp make_pair
#define fori(t, k) for(ll i = t; i < k; i++)
#define forj(t, k) for(ll j = t; j < k; j++)
using namespace std;
int main(){
    ll t;
    cin>>t;
    fori(0, t){
        map<int, int> id;
        ll n, m;
        cin>>n>>m;
        vv(char) mat(n, (v(char)(m, '0'))); 
        fori(0, n){
            forj(0, m){
                cin>>mat[i][j];
            }
        }
        string s = "";
        for(int i = 0; i < n; i++){
            s = "";
            for(int j = 0; j < m; j++){
                if(mat[i][j] != '.' || mat[i][j] != '#'){
                    s += mat[i][j];
                }
                if(mat[i][j] == '#'){
                    j--;
                    for(int k = s.size() - 1; k >= 0; k--){
                        mat[i][j] = s[k];
                        id[j]++;
                        j--;
                    }
                    s = "";
                }
                for(auto p : id){
                    for(int k = 0; k < n; k++){
                        if(mat[k][p.first] != '.' || mat[k][p.first] != '#'){
                            s += mat[i][j];
                        }
                    }
                }
            }
        }
    }
}