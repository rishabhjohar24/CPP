#include<bits/stdc++.h>
using namespace std;
// 0 means tails , 1 means heads

int main(){
    int n, q, count = 0, p, t, r;
    cin>>n>>q;
    string s[q], x, y, z, temp;
    char a, b, c;
    int face[n] = {};
    for(int i = 0; i < q; i++){
        cin>>x>>y>>z;
        s[i] = x + y + z;
    }
    for(int i = 0; i < q; i++){
        temp = s[i];
        a = temp[0];
        p = (int)a - 48;
        b = temp[1];
        t = (int)b - 48; 
        c = temp[2];
        r = (int)c - 48;
        if(p == 1){
            count = 0;
            for(int j =t; j <= r; j++){
                if(face[j] == 1){
                    count++;
                }
            }
            cout<<count<<endl;
        }
        if(p == 0){
            for(int j = t; j <= r; j++){
                if(face[j] == 0){
                    face[j] = 1;
                }
                else if(face[j] == 1){
                    face[j] = 0;
                }
            }
        }
    }
    return 0;
}





// int main(){
//     int n, q, count = 0;
//     cin>>n>>q;
//     int arr[q][3], face[n] = {};
//     for(int i = 0; i < q; i++){
//         for(int j = 0; j < 3; j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i = 0; i < q; i++){
//         if(arr[i][0] == 1){
//             count = 0;
//             for(int j = arr[i][1]; j <= arr[i][2]; j++){
//                 if(face[j] == 1){
//                     count++;
//                 }
//             }
//             cout<<count<<endl;
//         }
//         if(arr[i][0] == 0){
//             for(int j = arr[i][1]; j <= arr[i][2]; j++){
//                 if(face[j] == 0){
//                     face[j] = 1;
//                 }
//                 else if(face[j] == 1){
//                     face[j] = 0;
//                 }
//             }
//         }
//     }
//     return 0;
// }