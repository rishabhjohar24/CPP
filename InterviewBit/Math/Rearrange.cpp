#include<bits/stdc++.h>
using namespace std;
// int rearrange(vector<int> &arr){
//     int n = arr.size(), temp;
    
//     return arr;
// }
int main(){
    int temp, n;
    cin>>n;
    vector <int> arr;
    for(int i = 0; i < n; i++){
        cin>>temp;
        arr.push_back(temp);
    }
    for(int i = 0; i < n; i++){
        arr[i] = arr[i] + ((arr[ arr[i] ] % n) * n);
    }
    for(int i = 0; i < n; i++){
        arr[i] = arr[i] / n;
    }
    
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}