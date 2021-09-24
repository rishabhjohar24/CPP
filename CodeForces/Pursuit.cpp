#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n;
        cin>>n;
        vector<int> a, b;
        int var;
        for(int i = 0; i < n; i++){
            cin>>var;
            a.push_back(var);
        }
        for(int i = 0; i < n; i++){
            cin>>var;
            b.push_back(var);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int k = n - n / 4, p = 0, temp;
        temp = k;
        int saumay = 0, nush = 0;
        for(int i = n - 1; i >= n - k; i--){
            saumay += a[i];
            nush += b[i];
        }
        while(saumay < nush){
            n++;
            if(!(n % 4)){
                saumay -= a[k];
                k++;
            }
            saumay += 100;
            nush += b[temp--];
            p++;
        }
        cout<<p<<"\n";
    }
    return 0;
}