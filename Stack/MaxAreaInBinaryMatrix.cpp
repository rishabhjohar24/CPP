#include<bits/stdc++.h>
using namespace std;
int MAH(int arr[] , int n){
    vector <int> l, r, a(n);
    stack <pair<int, int>> s;
    for(int i = 0; i < n; i++){
        if(s.size() == 0){
            l.push_back(-1);
        }
        else if(s.size() > 0 && s.top().first < arr[i]){
            l.push_back(s.top().second);
        }
        else if(s.size() > 0 && s.top().first >= arr[i]){
            while(s.size() > 0 && s.top().first >= arr[i]){
                s.pop();
            }
            if(s.size() == 0){
                l.push_back(-1);
            }
            else{
                l.push_back(s.top().second);
            }
        }
        s.push({arr[i], i});
    }
    while(s.size() > 0){
        s.pop();
    }
    for(int i = n - 1; i >= 0; i--){
        if(s.size() == 0){
            r.push_back(n);
        }
        else if(s.size() > 0 && s.top().first < arr[i]){
            r.push_back(s.top().second);
        }
        else if(s.size() > 0 && s.top().first >= arr[i]){
            while(s.size() > 0 && s.top().first >= arr[i]){
                s.pop();
            }
            if(s.size() == 0){
                r.push_back(n);
            }
            else{
                r.push_back(s.top().second);
            }
        }
        s.push({arr[i], i});
    } 
    int temp;
    for(int i = 0; i < n; i++){
        temp = r[i] - l[i] - 1;
        temp = temp * arr[i];
        a[i] = temp;
    }
    return *max_element(a.begin(), a.end());
}
int main(){
    int n;
    cin>>n;
    int arr[n][n], comp[n] = {};
    vector <int> a(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == 0){
               comp[j] = 0; 
            }
            comp[j] = comp[j] + arr[i][j]; 
        }
        // for(int i = 0; i < n; i++){
        //     cout<<comp[i]<<" ";
        // }
        // cout<<endl;
        a[i] = MAH(comp, n);
    }
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<*max_element(a.begin(), a.end());
    return 0;
}