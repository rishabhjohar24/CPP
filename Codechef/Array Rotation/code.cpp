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
        ll n;
        cin>> n;
        ll a[n],b[n];
        for(int i = 0;i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }
        ll maxsum=INT_MAX;
        vector<pair<int,int>> v;
        for(int i = 0; i < n; i++) {
            int sum = (a[0] + b[i]) % n;

            if(maxsum >= sum) {
                maxsum = sum;
                v.push_back({sum,i});
        ;
            }
        }
        sort(v.begin(),v.end());

        if(v[0].first != v[1].first) {
            ll caaa[n];
            int j = v[0].second;
            int k = 0;
            while(k < n) {
                caaa[k] = (a[k] + b[j]) % n;
                k++;
                j = (j + 1) % n;
            }
            for(int i = 0; i < n; i++) cout << caaa[i] << " ";
        } else {
            ll caaa[n];
            int j = v[0].second;
            int k = 0;
            while(k <n) {
                caaa[k] = (a[k] + b[j])%n;
                k++;
                j = (j + 1) % n;
            }
            ll daaa[n];
             j = v[1].second;
             k = 0;
            while(k <n) {
                daaa[k] = (a[k] + b[j]) % n;
                k++;
                j = (j + 1) % n;
            }
            int flag = 0;
            for(int i  =0; i < n; i++){
                if(caaa[i] == daaa[i]) continue;
                else if( caaa[i] < daaa[i]) break;
                else if(caaa[i] > daaa[i]) flag = 1;
            }
            if(flag == 0) for(int i = 0; i < n; i++) cout << caaa[i] << " ";
            else for(int i = 0; i < n; i++) cout << daaa[i] << " ";
        }
    }
    return 0;
}