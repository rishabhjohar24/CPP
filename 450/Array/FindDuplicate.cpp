#include<iostream>
using namespace std;
int main(){
    int n, a = 0;
    cin>>n;
    int sum = 0, arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        sum += arr[i];
    }
    int dup = sum - ((n * (n - 1)) / 2);
    cout<<dup;
    return 0;
}