#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i <t; i++){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        int sum, max, min;
        max = *max_element(arr, arr + n);
        min = *min_element(arr, arr + n);
        sum =  2*(max - min);
        cout<<sum;
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     for(int i = 0; i < t; i++){
//         int n, sum = 0, temp = 0;
//         cin>>n;
//         int a[n];
//         for(int i = 0; i < n; i++){
//             cin>>a[i];
//         }
//         sort(a, a + n);
//         for(int i = 0; i < n - 2; i++){
//             for(int j = i + 1; j < n - 1; j++){
//                 int k = j + 1;
//                 cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
//                 k++;
//                 // temp = abs(a[i] - a[j]) + abs(a[j] - a[j + 1]) + abs(a[j + 1] - a[i]);
//                 // if(temp > sum){
//                 //     sum = temp;
//                 // }
//             }
//         }
//         cout<<sum;
//     }
//     return 0;
// }






// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     for(int i = 0; i < t; i++){
//         int n, sum = 0, temp = 0;
//         cin>>n;
//         int a[n];
//         for(int i = 0; i < n; i++){
//             cin>>a[i];
//         }
//         // sort(a, a + n);
//         for(int i = 0; i < n - 2; i++){
//             for(int  j = i + 1; j < n - 1; j++){
//                 for(int k = j + 1; k < n; k++){
//                     // cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
//                     temp = abs(a[i] - a[j]) + abs(a[j] - a[k]) + abs(a[k] - a[i]);
//                     if(sum < temp){
//                         sum = temp;   
//                     }
//                 }
//             }
//         }
//         cout<<sum;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     for(int i = 0; i < t; i++){
//         int n, sum = 0, temp = 0;
//         cin>>n;
//         int a[n];
//         for(int i = 0; i < n; i++){
//             cin>>a[i];
//         }
//         // sort(a, a + n);
//         for(int i = 0; i < n; i++){
//             for(int  j = i + 1; j < n; j++){
//                 for(int k = j + 1; k < n; k++){
//                     // cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
//                     temp = abs(a[i] - a[j]) + abs(a[j] - a[k]) + abs(a[k] - a[i]);
//                     if(sum < temp){
//                         sum = temp;   
//                     }
//                 }
//             }
//         }
//         cout<<sum<<endl;
//     }
//     return 0;
// }








// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     for(int i = 0; i < t; i++){
//         int x, y, z, p, temp;
//         cin>>p;
//         vector <int> a, b;
//         for(int i = 0; i < p; i++){
//             cin>>temp;
//             a.push_back(temp);
//         }
//         sort(a.begin(), a.end());
//         temp = abs(a[0] - a[p - 1]) + abs(a[p - 1] - a[p - 2]) + abs(a[p - 2] - a[0]);
//         // for(int i = 0; i < p; i++){
//         //     if(b[p - 1] == a[i]){
//         //         z = i + 1;
//         //     }
//         // }
//         // for(int i = 0; i < p; i++){
//         //     if(b[p - 2] == a[i]){
//         //         y = i + 1;
//         //     }
//         // }
//         // for(int i = 0; i < p; i++){
//         //     if(b[0] == a[i]){
//         //         x = i + 1;
//         //     }
//         // }
//         // cout<<x<<" "<<y<<" "<<z;
//         cout<<temp;
//     } 
//     return 0;
// }