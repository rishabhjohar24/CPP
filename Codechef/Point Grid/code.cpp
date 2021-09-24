#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int p = 0; p < t; p++){
        long n;
        cin>>n;
        long arr[n];
        for(long i = 0; i < n; i++){
            cin>>arr[i];
        }
        long max = *max_element(arr, arr + n);
        long mat[n + 1][max + 9];
        memset(mat, 0, sizeof(mat));
        for(long i = n; i >= 1; i--){
            long k = arr[n - i];
            for(long j = 0; j < max; j++){
                if(k > 0){
                    mat[i][j] = 1;
                    k--;
                }
            }
        }
        long count = 0, i = n, j = 0, local_i, local_j, flag = 0;
        local_i = i;
        local_j = j;
        //first we will traverse left to right till flag is 0
        //then bottom to up while flag is not zero
        //local_j & local_i are local variable for traversing
        while(i > 0 && j < max + 1){
            while(local_j < max + 1 && local_i > 0){
                if(mat[local_i][local_j] == 1 && mat[local_i - 1][local_j + 1] == 1){
                    long temp = 1;
                }
                else if(mat[local_i][local_j] == 1 && mat[local_i - 1][local_j + 1] == 0){
                    count++;
                }
                local_j++;
                local_i--;
            }
            if(j == max && flag == 0){
                j = 0;
                flag = 1;
            }
            if(flag == 0){
                j++;
                local_j = j;
                local_i = i;
            }
            if(flag == 1){
                i--;
                local_i = i;
                local_j = j;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
