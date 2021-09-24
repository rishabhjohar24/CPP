#include<bits/stdc++.h>
using namespace std;
int minJump(int arr[], int n){
    int jump = 1, var = INT_MIN, temp = arr[0], br, index = 1, cal = 1;
    for(int i = 1; i < n; i++){
        int j = 0;
        var = INT_MIN;
        while(temp >= 0){
            br = arr[i];
            if(i == n - 1){
                break;
            }
            if(br > var){
                var = br;
                index = i;
            }
            i++;
            temp--;
        }
        cal += var;
        jump++;
        if(cal >= n){
            break;
        }
    }
    return jump;
}
int main(){
    int n; 
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int jump = minJump(arr, n);
    return 0;
}