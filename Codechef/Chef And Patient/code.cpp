//wrong code
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    for(int j = 0; j < t; j++){
        int n, hour;
        cin>>n;
        vector<pair<int, int>> A;
        vector<pair<int, int>> B;
        int arr[n], h[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
            A.push_back(make_pair(arr[i], i));
        }
        if(*max_element(arr, arr + n) == *min_element(arr, arr+n)){
            int i = 0;
            while(n--){
                cout<<i + 1<<" ";
                i++;
            }
            cout<<endl;
        }
        else{
            sort(A.begin(), A.end());
            int i, flag = 1, count = 1;
            hour = n;
            for(i = 0; i < n - 1; i++){
                if(A[i].first == A[i + 1].first){
                    while((A[i].second < A[i + 1].second) && (A[i].first == A[i + 1].first)){
                        i++;
                        count++;
                    }
                    flag = i;
                    while(flag > 0){
                        B.push_back(make_pair(A[flag].second, hour));
                        hour--;
                        flag--;
                    }
                }
                else{
                    B.push_back(make_pair(A[i].second, hour));
                    hour--;
                }
                if(i == n - 2){
                    B.push_back(make_pair(A[i + 1].second, hour));
                }
            }
            sort(B.begin(), B.end());
            for(i = 0; i < n; i++){
                cout<<B[i].second<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}