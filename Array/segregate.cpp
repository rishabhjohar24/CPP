//Segregate Even and Odd numbers
#include<bits/stdc++.h>
using namespace std;
//SWAP
void swap (int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
//segrregate
void segregate(int arr[], int n){
    int left, right, flag;
    left = 0;
    right = n-1;
    while(left<right){
        while((arr[left]%2 == 0) && left < right){
            left++;
        }
        while((arr[right]%2 == 1) && left < right){
            right--;
        }
        if(left<right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}
int main(){
    int p;
    cin>>p;
    int a[p];
    for(int i=0; i<p; i++){
        cin>>a[i];
    }
    segregate(a,p);
    for(int i=0; i<p; i++){
        cout<<a[i];
    }
    return 0;
}