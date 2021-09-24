//task2
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n, flag = 1, i, cost1 = 0, cost2 = 0;
    string s1 = "", s2 = "", s3 = "";
    cin>>n;
    for(i = 0; i < n; i++){
        (flag) ? s1 += "1": s1 += "0";
        (flag) ? s2 += "0" : s2 += "1";
        (flag) ? flag = 0 : flag = 1;
    }
    ll *arr = new ll(n);
    for( i = 0; i < n; i++){
        cin>>arr[i];
        s3 += to_string(arr[i]);
    }
    i = 0;
    while(n--){
        if(s1[i] != s3[i]){
            cost1++;
        }
        if(s2[i] != s3[i]){
            cost2++;
        }
        i++;
    }
    i = min(cost1, cost2);
    cout<<i<<"\n";
    return 0;
}


//task 3

// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main(){
//     ll n, i, gmax = INT_MIN, lmax = INT_MIN;
//     cin>>n;
//     ll *arr = new ll(n);
//     for(i = 0; i < n; i++){
//         cin>>arr[i];
//     }
//     sort(arr, arr + n);
//     map<ll, ll> m;
//     i = n - 1;
//     while(arr[i] > 0){
//         m[arr[i]]++;
//         i--;
//     }
//     i = 0;
//     while(arr[i] < 0){
//         if(m.find(abs(arr[i])) != m.end()){
//             lmax = abs(arr[i]);
//         }
//         i++;
//         gmax = max(gmax, lmax);
//     }
//     (gmax == INT_MIN) ? cout<<"-1\n" : cout<<gmax<<"\n";
//     return 0;
// }