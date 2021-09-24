#include<bits/stdc++.h>
using namespace std;
void disjoint(int arr[], int brr[], int n, int k){
    unordered_map<int, int> joint;
    int flag = 0;
    for(int i = 0; i < n; i++){
        joint[arr[i]]++;
    }
    for(int i = 0; i < k; i++){
        if(joint[brr[i]] > 0){
            if(flag == 0){
                cout<<"Common elements in two sets are: ";
            }
            cout<<brr[i]<<" ";
            joint.erase(brr[i]);
            flag = 1;
        }
    }
    cout<<endl;
    if(flag == 0){
        cout<<"Disjoint Sets";
    }
}
int main(){
    int n, k;
    cin>>n>>k;
    int arr[n], brr[k];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < k; i++){
        cin>>brr[i];
    }
    disjoint(arr, brr, n, k);
    return 0;
}