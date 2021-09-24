#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n;
        cin>>n;
        int index[100001][2];
        memset(index, 0, sizeof(index));
        unordered_map<int, int> a;
        int arr[n], brr[2n + 1] = {1};
        for(int i = 0; i < n; i++){
            cin>>arr[i];
            index[arr[i]][0] = 1;
            index[arr[i]][1] = i + 1;
        }
        int count = 0, k = *max_element(arr, arr + n);
        for(int i = 0; i < n; i++){
            for(int j = arr[i]; j <= (2 * n) - 1; j += arr[i]){
                if(index[j][0] && i + 1 < index[j][1]){
                    count++;
                }
            }
        }
        cout<<count<<endl<<endl;
    }
    return 0;
}