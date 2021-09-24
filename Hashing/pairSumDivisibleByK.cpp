#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    unordered_map<int, int> map;
    for(int i = 0; i < n; i++){
        map[((arr[i] % k) + k) % k]++;
    }
    if(n % 2 != 0){
        cout<<"NO";
        return false;
    }
    for(int i = 0; i < n; i++){
        int rem = ((arr[i] % k) + k) % k;
        if(2 * rem == 0){
            if(map[rem] % 2 != 0){
                cout<<"NO";
                return false;
            }
        }
        else if(rem == 0){
            if(map[rem] & 1){
                cout<<"NO";
                return false;
            }
        }
        else if(map[rem] != map[k - rem]){
            cout<<"N0";
            return false;
        }
    }
    cout<<"YES";
    return true;
}