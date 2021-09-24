#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n, val;
        cin>>n;
        vector <int> arr;
        for(int i = 0; i < n; i++){
            cin>>val;
            arr.push_back(val);
        }
        sort(arr.begin(), arr.end());
        int gmin = INT_MAX;
        for(int i = 1; i < n; i++){
            if(arr[i] >= 0){
                break;
            }
            gmin = min(gmin, abs(arr[i] - arr[i - 1]));
        }
        for(int i = n - 1; i >= 0; i--){
            if(arr[i] > gmin){
                arr.pop_back();
            }
        }
        cout<<arr.size()<<endl;
    }
    return 0;
}

//a - b >= +- k