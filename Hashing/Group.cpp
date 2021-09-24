#include<bits/stdc++.h>
using namespace std;
int has[1001][1];
void Group_multiple_occurrence(int arr[], int n){
    for(int i = 0; i < n; i++){
        has[arr[i]][0]++;
    }
    for(int i = 0; i < n; i++){
        while(has[arr[i]][0] > 0){
            cout<<arr[i]<<" ";
            has[arr[i]][0]--;
        }
    }
}
int main(){
    memset(has, 0, sizeof(has));
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    Group_multiple_occurrence(arr, n);
    return 0;
}

//--Wrong Due to order---;

// void Group_multiple_occurrence(int arr[], int n){
//     unordered_map<int, int> group;
//     for(int i = 0; i < n; i++){
//         group[arr[i]]++;
//     }
//     for(auto it = group.begin(); it != group.end(); it++){
//         while(it->second > 0){
//             cout<<it->first<<" ";
//             it->second--;
//         }
//     }
// }