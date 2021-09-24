#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n, count = 0; 
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if((arr[j] - arr[i]) == (j - i)){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
