#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, count=0, temp;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    sort (a, a+n);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        count = 0;
        temp = 0;
        for(int j=i+1; j<n; j++){
            // if(a[i] = a[j]){
            //     temp = j;
            // }
            if(a[i] < a[j] ){
                count++;
            }
        }
        if (a[i] == count){
            cout<<"1";
            break;
        }
    }
    return 0;
}