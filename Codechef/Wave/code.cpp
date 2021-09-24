#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
void solve(){
    ll n, q;
    cin>>n>>q;
    ll arr[n];
    for(ll i = 0;i < n; i++){
        cin>>arr[i];
    }
    sort(a,a+n);
    for(ll i = 0;i < q; i++){
        ll randi;
        cin>>randi;
        ll lauda = lower_bound(arr, arr + n, randi) - arr;
        if(lauda < n && arr[lauda] == randi){
            cout<<"0\n";
        }
        else if(lauda % 2 == 0){
            cout<<"POSITIVE\n";
        }
        else{
            cout<<"NEGATIVE\n";
        }
    }
}
int main(){
    solve();
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n , q;
//     cin>>n>>q;
//     int arr[n], que[q], quer[q];
//     map<int, int>track;
//     for(int i = 0; i < n; i++){
//         cin>>arr[i];
//     }
//     sort(arr, arr + n);
//     for(int i = 0; i < q; i++){
//         cin>>que[i];
//         quer[i] = que[i];
//     }
//     sort(que, que + q);
//     int pos = 0;
//     for(int i = 0; i < q; i++){
//         int flag = 1, t = 0, j = pos;
//         for(j; j < n; j++){
//             if(arr[j] < que[i]){
//                 pos = j;
//                 break;
//             }
//             else if(que[i] == arr[j]){
//                 flag = 0;
//                 break;
//             }
//         }
//         if(flag){
//             cout<< pos<<" " ;
//             track.insert({que[i], pos});
//         }
//         else{
//             cout<<t<<" ";
//             track.insert({que[i], 0});
//         }
//     }
//     cout<<endl;
//     for(auto i : track){
//         cout<<i.first<<" ";
//         if(((n % 2 == 0 &&  i.second % 2 == 0) || (n % 2 == 1 && i.second % 2 == 1))){
//             cout<<"POSITIVE\n";
//         }
//         else if(((n % 2 == 0 && i.second % 2 == 1) || (n % 2 == 1 && i.second % 2 == 0))){
//             cout<<"NEGATIVE\n";
//         }
//     }
//     return 0;
// }
// for(int i = 0; i < q; i++){
    //     int flag = 1, k, count = 0;
    //     cin>>k;
    //     if(track.find(k) != track.end()){
    //         cout<<"0\n";
    //         flag = 0;
    //     }
    //     for(int i = 0; i < n, flag == 1; i++){
    //         if(k < arr[i]){
    //             break;
    //         }
    //         count++;
    //     }
    //     if(((n % 2 == 0 &&  count % 2 == 0) || (n % 2 == 1 && count % 2 == 1)) && flag == 1){
    //         cout<<"POSITIVE\n";
    //     }
    //     else if(((n % 2 == 0 && count % 2 == 1) || (n % 2 == 1 && count % 2 == 0)) && flag == 1){
    //         cout<<"NEGATIVE\n";
    //     }
    // }