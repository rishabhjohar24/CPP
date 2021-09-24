#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n], lmin = 0, gmin = INT_MAX;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        lmin += arr[i];
        if(lmin < gmin){
            gmin = lmin;
        }
        if(lmin > 0){
            lmin = 0;
        }
    }
    cout<<gmin;
    return 0;
}