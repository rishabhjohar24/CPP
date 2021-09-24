#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n, var;
        cin>>n;
        vector <pair<int , int>> A, B;
        for(int i = 0; i < n; i++){
            cin>>var;
            A.push_back(make_pair(var, true));
        }
        sort(A.begin(), A.end());
        
        map <int , int> hash;
        for (int i = 0; i < n; i++){ 
            hash[A[i].first]++;
        } 
        int max_count = 0, res = -1; 
        for (auto i : hash) { 
            if (max_count < i.second) { 
                res = i.first; 
                max_count = i.second; 
            } 
            B.push_back(make_pair(i.first, i.second));
        }
        for(int i = 0; i < res; i++){
            for(int j = 0; j < B.size(); j++){
                if(B[j].second > 0){
                    cout<<B[j].first<<" ";
                    B[j].second--;
                }
            }
        }
    }
    return 0;
}
