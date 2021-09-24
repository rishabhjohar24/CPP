//Squareroot Of An Integer
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, low, mid, high, flag=0;
    cin>>n;
    low = 1;
    high = n;
    while(low <= high){
        mid = (low + high)/2;
        if (mid*mid == n){
            cout<<mid;
            flag = 1;
            break;
        }
        else if (mid*mid > n){
            high = mid - 1;
        }
        else if (mid*mid < n){
            low = mid + 1;
        }
    }
    if (flag != 1){
        cout<<low-1;
    }
    return 0;
}