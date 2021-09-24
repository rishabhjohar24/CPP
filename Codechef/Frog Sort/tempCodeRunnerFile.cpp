#include<bits/stdc++.h>
using namespace std;
int find(int arr[], int x, int n){
    int i;
    for(i = 0; i < n; i++){
        if(arr[i] == x){
            break;
        }
    }
    return i;
}
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n, count = 0, temp, t;
        cin>>n;
        int w[n], l[n], a[n], b[n], index[n];
        for(int i = 0; i < n; i++){
            cin>>w[i];
            a[i] = w[i];
        }
        for(int i = 0; i < n; i++){
            cin>>l[i];
        }
        sort(a, a + n);
        for(int i = 0; i < n; i++){
            t = find(w, a[i], n);
            index[i] = t;
            b[i] = l[t];
        }
        temp = index[0];
        for(int i = 0; i < n - 1; i++){
            if(index[i] > index[i + 1]){
                while(temp >= index[i + 1]){
                    index[i + 1] = index[i + 1] + b[i + 1];
                    count++;
                }
            }
            temp =  index[i + 1];
        }
        cout<<count<<endl;
    }
    return 0;
}