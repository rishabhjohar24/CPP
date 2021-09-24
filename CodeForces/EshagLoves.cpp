// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     for(int i = 0; i < t; i++){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i = 0; i < n; i++){
//             cin>>arr[i];
//         }
//         int cnt = 0, k = *min_element(arr, arr + n);
//         for(int i = 0; i < n; i++){
//             if(k == arr[i]){
//                 cnt++;
//             }
//         }
//         cout<<n - cnt<<endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,kp = n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        for(int i=1;i<n;i++) {
            if(a[i] > a[i-1]) {
                kp = i;
                break;
            }
        }
        cout << n-kp << "\n";
    }
    return 0;
}