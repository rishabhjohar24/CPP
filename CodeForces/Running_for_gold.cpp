#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int p = 0; p < t; p++){
        int n;
        cin>>n;
        int mat[n][5], mn[6];
        for(int i = 0; i < 5; i++){
            mn[i] = INT_MAX;
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 5; j++){
                cin>>mat[i][j];
                mn[j] = min(mn[j], mat[i][j]);
            }
        }
        vector<pair<int , int>> win;
        for(int i = 0; i < n; i++){
            int ans = 0;
            for(int j = 0; j < 5; j++){
                if(mat[i][j] == mn[j]){
                    ans++;
                }
            }
            win.push_back(make_pair(ans, i + 1));
        }
        sort(win.begin(), win.end());
        if((win[n - 1].first > 2) || (win[n - 1].first > win[n - 2].first)){
            cout<<win[n- 1].second<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
    }
    return 0;
}