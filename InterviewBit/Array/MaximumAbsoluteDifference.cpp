#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    for (int i=0; i<n; i++){
        cin>>A[i];
    }
    int x = *max_element(A , A + n);
    int y = *min_element(A , A + n);
    int diff, xi, yj, flagi = 0, flagj = 0;
    for(int i = 0; i < n; i++){
        if(x == y){
            return n - 1;
        }
        if(flagi == 0 && x == A[i]){
            xi = i;
            flagi = 1;
        }
        if(flagj == 0 && y == A[i]){
            yj = i;
            flagj = 1;
        }
    }
    diff = abs(x - y) + abs(xi - yj);
    cout<<diff;
    // for (int i=0; i<n; i++){
    //     for (int j=i+1; j<n; j++){
    //         diff = abs((a[i] - a[j])) + abs((i-j));
    //         if(temp < diff){
    //             temp = diff;
    //             diff = 0;
    //         }
    //         else if (temp >= diff){
    //             continue;
    //         }
    //     }
    // }
    // cout<<temp;
    return 0;
}