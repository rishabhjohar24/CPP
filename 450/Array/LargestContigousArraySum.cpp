#include<iostream>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int sum = 0, max = -999999;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum >= max){
            max = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    cout<<max;
    return 0;
}
