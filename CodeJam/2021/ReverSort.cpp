#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n, cost = 0, val;
        cin>>n;
        vector <int> A;
        for(int i = 0; i < n; i++){
            cin>>val;
            A.push_back(val);
        }
        for(int i = 0; i < n - 1; i++){
            int minimum = INT_MAX, index;
            for(int k = i; k < n; k++){
                if(A[k] < minimum){
                    minimum = A[k];
                    index = k;
                }
            }
            cost = cost + index - i + 1;
            reverse(A.begin() + i, A.begin() + index + 1);
        }
        cout<<"Case #"<<i + 1<<": "<<cost<<endl;
    }
    return 0;
}

// int mp[101][1];
// int Solve(int arr[], int n, int start){
//     if(start == n - 1){
//         return 0;
//     }
//     int minimum = *min_element(arr + start, arr + n);
//     int min_index = mp[minimum][0];
//     int val = min_index - start + 1;
//     if(val > 1) {
//         sort(arr + start, arr + min_index - start + 1);
//     }
//     for(int i = start; i <= min_index; i++){
//         mp[arr[i]][0] = i;
//     }
//     return val;
// }
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL); cout.tie(NULL);
//     int t;
//     cin>>t;
//     for(int i = 0; i < t; i++){
//         int n, cost = 0;
//         cin>>n;
//         int arr[n];
//         for(int i = 0; i < n; i++){
//             cin>>arr[i];
//             mp[arr[i]][0] = i;
//         }
//         for(int i = 0; i < n; i++){
//             cost += Solve(arr, n, i);
//         }
//         cout<<"Case #"<<i + 1<<": "<<cost<<endl;
//     }
//     return 0;
// }
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL); cout.tie(NULL);
//     int t;
//     cin>>t;
//     for(int i = 0; i < t; i++){
//         int n, cost = 0, minimum, min_index, val;
//         cin>>n;
//         int arr[n];
//         for(int i = 0; i < n; i++){
//             cin>>arr[i];
//             mp[arr[i]][0] = i;
//         }
//         for(int i = 0; i < n; i++){
//             if(i == n - 1){
//                 val = 0;
//             }
//             else{
//                 minimum = min_element(arr, i, n);
//                 min_index = mp[minimum][0];
//                 val = min_index - i + 1;
//                 if(val > 1) {
//                     sort(arr + i, arr + min_index - i + 1);
//                 }
//                 for(int i = 0; i <= min_index; i++){
//                     mp[arr[i]][0] = i;
//                 }
//             }
//             cost += val;
//         }
//         cout<<"Case #"<<i + 1<<": "<<cost<<endl;
//     }
//     return 0;
// }