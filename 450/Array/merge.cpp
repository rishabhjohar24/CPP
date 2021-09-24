#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    int arr[a], brr[b];
    for(int i = 0; i < a; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < b; i++){
        cin>>brr[i];
    }
    int aa = 0, bb = 0;
    for(int i = 0; i < a + b; i++){
        if(arr[aa] > brr[bb]){
            cout<<brr[bb]<<" ";
            bb++;
        }
        else if(arr[aa] < brr[bb]){
            cout<<arr[aa]<<" ";
            aa++;
        }
        else if(arr[aa] == brr[bb]){
            cout<<arr[aa]<<" ";
            aa++;
            bb++;
        }
        if(aa > a && bb > b){
            break;
        }
    }
    if(aa == a){
        for(int i = bb; i < b; i++){
            cout<<brr[i]<<" ";
        }
    }
    if(bb == b){
        for(int i = aa; i < a; i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}