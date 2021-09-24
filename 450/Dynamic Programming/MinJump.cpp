//WRONG
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n], index[10000];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        index[arr[i]] = i;
    }
    int jump = 1, step = arr[0], next = INT_MIN;
    for(int i = 1; i < n; i++){
        next = INT_MIN;
        if(step == 0){
            cout<<INT_MAX;
            break;
        }
        if(i + step >= n - 1){
            cout<<jump;
            break;
        }
        while(step > 0){
            next = max(next, arr[i]);
            step--;
            i++;
        }
        jump++;
        step = next;
        i = index[next];
    }
    cout<<jump;
    return 0;
}