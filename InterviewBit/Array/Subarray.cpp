#include<bits/stdc++.h>
using namespace std;

void subarray(int arr[], int n){
    for(int i=0; i<n; i++)
    {
        for (int j=i; j<n; j++)
        {
            for(int k=i; k<=j; k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}
int main(){
    int n,k;
    cin>>n;
    k = (n*(n+1))/2;
    int arr[n],b[k];
    for(int i=0; i<n; i++)
    {
        arr[i] = 1 + i;
    }
    subarray(arr, n);
    return 0;
}