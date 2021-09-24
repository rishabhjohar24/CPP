//Find the closest pair from two sorted arrays

#include<bits/stdc++.h>
using namespace std;
void pai (int a1[], int a2[], int x, int n1, int n2){
    int diff = _INTEGRAL_MAX_BITS,res_l, res_r;
    int l=0, r=n2-1;
    while(l<n1 && r>=0){
        if(abs(a1[l] + a2[r] - x) < diff){
            res_l = l;
            res_r = r;
            diff = abs(a1[l] + a2[r] - x);
        }
        if(a1[l] + a2[r] > x){
            r--;
        } else if (a1[l] + a2[r] < x){
            l++;
        } else if(a1[l] + a2[r] == x){
            cout<<a1[l]<<" & "<<a2[r];
            break;
        }
    }
    cout<<"CLosest pair is: "<<a1[res_l]<<" & "<<a2[res_r];
}
int main(){
    int p,q,e;
    cin>>p>>q>>e;
    int arr1[p], arr2[q];
    for(int i=0; i<p; i++){
        cin>>arr1[i];
    }
    for(int i=0; i<q; i++){
        cin>>arr2[i];
    }
    pai(arr1, arr2, e, p, q);
    return 0;
}