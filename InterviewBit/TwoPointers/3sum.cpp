#include<bits/stdc++.h>
using namespace std;
int lsum(vector<int>& arr, int x){
    int l, r, gmin = INT_MAX, val, sum;
    for(int i = 0; i < arr.size() - 2; i++){
        val = arr[i];
        l = i + 1;
        r = arr.size() - 1;
        while(l < r){
            sum = val + arr[l] + arr[r];
            if(abs(1LL*x - sum) < abs(1LL*x - gmin)){
                gmin = sum;
            }
            if(sum < x){
                l++;
            }
            else {
                r--;
            }
        }
    }
    return gmin;
}


int main(){
    vector <int> A = {-5, 1, 4, -7, 10, -7, 0, 7, 3, 0, -2, -5, -3, -6, 4, -7, -8, 0, 4, 9, 4, 1, -8, -6, -6, 0, -9, 5, 3, -9, -5, -9, 6, 3, 8, -10, 1, -2, 2, 1, -9, 2, -3, 9, 9, -10, 0, -9, -2, 7, 0, -4, -3, 1, 6, -3 };
    int temp, n, B;
    cin>>B;
    // cin>>n>>B;
    // for(int i = 0; i < n; i++){
    //     cin>>temp;
    //     A.push_back(temp);
    // }
    sort(A.begin(), A.end());
    cout<<lsum(A, B);
    return 0;
}   