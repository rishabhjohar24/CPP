#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int profit = 0, lprofit = 0;
    stack <int> s;
    for(int i = 0; i < n - 1; i++){
        lprofit = arr[i + 1] - arr[i];
    }
    return 0;
}