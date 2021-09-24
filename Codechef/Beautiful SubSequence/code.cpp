#include <bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define vi vector<int>
#define mod 1000000007
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0;i < n; i++) cin >> a[i];
        vector<pair<int, int>> t(n, mp(1,0));
        for(int i = 1; i < n; i++) {
            for(int j = 0; j < i; j++) {
                if(a[j] != a[i]) {
                    if(t[j].second != k){
                        t[i].first = t[j].first+1;
                        t[i].second = t[j].second+1;
                    }
                    else continue;
                }
                else {
                    t[i].first = t[j].first+1;
                    t[i].second = t[j].second;
                }
            }
        }
        int mx = 1;
        for(int i = 0; i < n; i++) {
            mx = max(mx,t[i].first);
        }
        cout << mx << "\n";
    }

}