#include<iostream>
using namespace std;
#define MAX 1000
bool has[MAX + 1][2];
void insert(int arr[], int n){
    for(int i = 0; i < n; i++){
        if(arr[i] >= 0){
            has[arr[i]][0] = 1;
        }
        else{
            has[abs(arr[i])][1] = 1;
        }
    }
}
bool veri_fy(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] >= 0){
            if(has[arr[i]][0] == 1){
                count++;
            }
        }
        else{
            if(has[abs(arr[i])][1] == 1){
                count++;
            }
        }
    }
    if(count == n){
        return true;
    }
    return false;
}
int main(){
    int n1, n2;
    cin>>n1>>n2;
    int arr1[n1], arr2[n2];
    for(int i = 0; i < n1; i++){
        cin>>arr1[i];
    }
    for(int i = 0; i < n2; i++){
        cin>>arr2[i];
    }
    if(n1 > n2){
        insert(arr1, n1);
        cout<<veri_fy(arr2, n2);
    }
    else{
        insert(arr2, n2);
        cout<<veri_fy(arr1, n1);
    }
    return 0;
}