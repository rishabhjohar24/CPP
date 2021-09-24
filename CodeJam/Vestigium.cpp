#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n;
        cin>>n;
        int arr[n][n];
        int trace = 0, row = 0, grow = INT_MIN, col = 0, gcol = INT_MIN;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin>>arr[i][j];
                if(i == j){
                    trace += arr[i][j];
                }
            }
        }
        int mpc[101] = {0}, mpr[101] = {0};
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(mpr[arr[i][j]] != 0){
                    row++;
                }
                else{
                    mpr[arr[i][j]]++;
                }
                if(mpc[arr[j][i]] != 0){
                    col++;
                }
                else{
                    mpc[arr[j][i]]++;
                }
            }
            memset(mpr, 0, sizeof(mpr));
            memset(mpc, 0, sizeof(mpc));
            if(row > grow){
                grow = row;
            }
            if(col > gcol){
                gcol = col;
            }
            row = 0;
            col = 0;
        }
        if(grow > 0 && gcol == 0){
            cout<<"Case #"<<i+1<<": "<<trace<<" "<<grow + 1<<" "<<gcol<<endl;
        }
        else if(gcol > 0 && grow == 0){
            cout<<"Case #"<<i+1<<": "<<trace<<" "<<grow<<" "<<gcol + 1<<endl;
        }
        else if(grow > 0 && gcol > 0){
            cout<<"Case #"<<i+1<<": "<<trace<<" "<<grow + 1<<" "<<gcol + 1<<endl;
        }
        else if(grow == 0 && gcol == 0){
            cout<<"Case #"<<i+1<<": "<<trace<<" "<<grow<<" "<<gcol<<endl;
        }
    }
    return 0;
}