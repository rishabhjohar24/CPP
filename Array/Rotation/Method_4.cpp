#include <bits/stdc++.h>
using namespace std;
int reverse (int arr[], int start, int end){
    int temp;
    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    return 0;
}
int rotate (int arr[], int d, int n){
    reverse (arr, 0, d-1);
    reverse (arr, d, n-1);
    reverse (arr, 0, n-1);
    return 0;
}

int main(){
    int n1,d1;
    cin>>n1;
    int a[n1];
    for(int i=0; i<n1; i++){
        cin>>a[i];
    }
    rotate(a,d1,n1);
    return 0;
}
