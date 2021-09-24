#include <bits/stdc++.h>
#define pb push_back
using namespace std;
void sol(){
    vector<int> evenArray, oddArray;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            evenArray.pb(arr[i]);
        }
        else{
            oddArray.pb(arr[i]);
        }
    }
    for(int i = 0; i < evenArray.size(); i++){
        cout << evenArray[i] << " ";
    }
    for(int i = 0; i < oddArray.size(); i++){
        cout << oddArray[i] << " ";
    }
    cout<<endl;
}
int main(){
   int t;
   cin >> t;
    for(int i = 0; i < t; i++){
        sol();
    }
    return 0;
}